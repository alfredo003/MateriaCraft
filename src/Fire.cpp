#include "../inc/Fire.hpp"

Fire::Fire():AMateria("fire")
{
     std::cout << "Fire Constructor Default Called" << std::endl;
}

Fire::~Fire()
{
     std::cout << "Fire Destructor Called" << std::endl;
}

Fire::Fire(const Fire&copy):AMateria(copy)
{
    std::cout << "Fire Copy Constructor Called" << std::endl;
}

Fire&Fire::operator=(const Fire&copy)
{
    std::cout << "Fire assginment operator Called" << std::endl;
    if(this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

AMateria* Fire::clone() const
{
    return (new Fire(*this));
}

void Fire::use(ICharacter& target)
{
    std::cout << " * shoots an fire bolt at " << target.getName() <<" *" << std::endl;
}
