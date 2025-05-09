#include "../inc/Cure.hpp"

Cure::Cure():AMateria("Cure")
{
    std::cout << "Cure Constructor Default Called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(const Cure&copy):AMateria(copy)
{
    std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure&Cure::operator=(const Cure&copy)
{
    std::cout << "Cure assginment operator Called" << std::endl;
    if(this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}