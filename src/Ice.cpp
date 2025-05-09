#include "../inc/Ice.hpp"

Ice::Ice():AMateria("Ice")
{
    std::cout << "Ice Constructor Default Called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor Called" << std::endl;
}

Ice::Ice(const Ice&copy):AMateria(copy)
{
    std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice&Ice::operator=(const Ice&copy)
{
    std::cout << "Ice assginment operator Called" << std::endl;
    if(this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}