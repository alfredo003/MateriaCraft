#ifndef FIRE_HPP
#define FIRE_HPP
#include <iostream>
#include "AMateria.hpp"

class Fire: public AMateria
{
    public:
        Fire();
         ~Fire();
          Fire(const Fire&copy);
          Fire&operator=(const Fire&copy);
          AMateria* clone() const;
          void use(ICharacter& target);
};

#endif