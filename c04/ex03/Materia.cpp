#include "Materia.hpp"

MateriaSource::MateriaSource(void)
{
    this->_materias[0] = NULL;
    this->_materias[1] = NULL;
    this->_materias[2] = NULL;
    this->_materias[3] = NULL;
    std::cout << "MateriaSource constructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "MateriaSource destructor called" << std::endl;
    this->_materias[0] = src._materias[0];
    this->_materias[1] = src._materias[1];
    this->_materias[2] = src._materias[2];
    this->_materias[3] = src._materias[3];
    return;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & src )
{
    this->_materias[0] = src._materias[0];
    this->_materias[1] = src._materias[1];
    this->_materias[2] = src._materias[2];
    this->_materias[3] = src._materias[3];
    return *this;
}

void    MateriaSource::learnMateria(AMateria* src)
{
    int i = 0;

    while(this->_materias[i] != NULL)
        i++;
    if (i == 4)
    {
        std::cout << "We have enough to learn for today." << std::endl;
        return ;
    }
    this->_materias[i] = src;
    return ;
}

AMateria*    MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0;i < 4 && this->_materias[i]; i++)
    {
        if(type == this->_materias[i]->getType())
            return this->_materias[i]->clone();
    }
    return NULL;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called" << std::endl;
    return;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
    return;
}

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "AMateria assignation constructor called" << std::cout;
    return;
}

const std::string &AMateria::getType(void)const
{
    return this->_type;
}