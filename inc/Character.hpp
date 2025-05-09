#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
    protected:
        std::string name;
        AMateria* inventory[4];
        int num_inventory;
    public:
        Character();
         ~Character();
        Character(const std::string name);
        Character(const Character&copy);
        Character&operator=(const Character&copy);
        std::string const & getName() const ;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};


#endif