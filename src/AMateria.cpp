#include "AMateria.hpp"


AMateria::AMateria():type("");
{
    std::cout << "Constructor Default Called" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{
    std::cout << "Constructor Called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "copy constructor Called" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "copy assignment operator Called" << std::endl;
    if(this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

std::string const & getType() const
{
    return (this->type);
}