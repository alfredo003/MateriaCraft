#include "../inc/Character.hpp"

Character::Character():name(""),num_inventory(0)
{
     for(int i = 0; i < 4; i++)
        this->inventory[i] = nullptr; 
    std::cout << "Character constructor default Called" << std::endl;
}
 
Character::Character(const std::string name):name(name),num_inventory(0)
{
    std::cout << "Character constructor Called" << std::endl;
    for(int i = 0; i < 4; i++)
        this->inventory[i] = nullptr;
}

Character::~Character()
{   
     for(int i = 0; this->num_inventory < 4; i++)
     {
        if(this->inventory[i])
            delete(this->inventory[i]);
     }
       
    std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character&copy)
{
    *this = copy;
      std::cout << "Character Destructor Called" << std::endl;
}

Character &Character::operator=(const Character&copy)
{
  std::cout << "Character copy assginment operator Called" << std::endl;
  if(this != &copy)
  {
    this->num_inventory = copy.num_inventory;
    this->name = copy.name;
    for(int i=0; i < 4; i++)
    {
        if(this->inventory[i])
        {
            delete(this->inventory[i]);
            this->inventory[i] = nullptr;
        }
    }
    for(int i = 0; i < this->num_inventory; i++)
    {
        this->inventory[i] = copy.inventory[i]->clone();
    }
  }
  return *this;
}

std::string const & Character::getName() const
{
    return (this->name);
}


void Character::equip(AMateria* m)
{
    if(this->num_inventory < 4 && m)
    {
        this->inventory[num_inventory] = m;
        this->num_inventory++;
    }else if (this->num_inventory == 4)
        std::cout << "Character already has 4 materia" << std::endl;
}

void Character::unequip(int idx)
{
    if(idx <= this->num_inventory && idx >= 0 && idx < 4)
    {
        this->inventory[idx] = nullptr;
    }
    else    
        std::cout << "No materia in this slot" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >=0 && idx < 4 && this->inventory[idx])
    {
        this->inventory[idx]->use(target);
    }else
    {
       std::cout << "No materia in this slot" << std::endl;
    }
}
