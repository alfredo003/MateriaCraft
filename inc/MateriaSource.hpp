#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource: public IMateriaSource
{
    protected:
        AMateria* materias[4];
        int num_materias;
    public:
        MateriaSource();
        ~MateriaSource();
         MateriaSource(const  MateriaSource&copy);
          MateriaSource&operator=(const  MateriaSource&copy);

        void learnMateria(AMateria*) = 0;
        AMateria* createMateria(std::string const & type) = 0;
};

#endif