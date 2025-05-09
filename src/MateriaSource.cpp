#include "../inc/MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    this->num_materias = 0;
	for (int i = 0; i < 4; ++i)
	{
		this->materias[i] = nullptr;
	}
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource&copy)
{
    for (int i = 0; i < 4; ++i)
       this->materias[i] = copy.materias[i]->clone();
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	this->num_materias = copy.num_materias;
	if (this != &copy)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (materias[i])
			{
				delete materias[i];
				materias[i] = nullptr;
			}
		}
		for (int i = 0; i < 4; ++i)
		{
			if (copy.materias[i])
				materias[i] = copy.materias[i]->clone();
			else
				materias[i] = nullptr;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (num_materias < 4)
	{
		materias[num_materias] = materia;
		num_materias++;
	}
	else
		std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < this->num_materias; ++i)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (0);
}