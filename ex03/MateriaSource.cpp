//
// Created by Prime_Games_2 on 01.05.2022.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < MateriaSource::_materias_size; i++)
        this->_materias[i] = NULL;

    return;
}

MateriaSource::MateriaSource( const MateriaSource &src )
{
    this->_materias[0] = src._materias[0];
    this->_materias[1] = src._materias[1];
    this->_materias[2] = src._materias[2];
    this->_materias[3] = src._materias[3];

    this->_number_learned = src._number_learned;
}

MateriaSource::~MateriaSource( void ){
    for (int i = 0; i < this->_materias_size; i++) {
        if(this->_materias[i])
            delete this->_materias[i];
    }
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &src )
{
    for (int i = 0; i < MateriaSource::_materias_size; i++)
    {
        if(this->_materias[i] != NULL)
            delete this->_materias[i];
        this->_materias[i] = src._materias[i];
    }

    this->_number_learned = src._number_learned;
    return *this;
}

void		MateriaSource::learnMateria(AMateria *materia_to_learn)
{
    if (this->_number_learned >= MateriaSource::_materias_size)
        std::cout << "Can't learn any more materias" << std::endl;
    else
    {
        this->_materias[this->_number_learned] = materia_to_learn;
        this->_number_learned++;
        std::cout << "Learned " << materia_to_learn->getType() << " Materia"
                  << std::endl;
    }
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < MateriaSource::_materias_size && this->_materias[i]; i++)
    {
        if (type == this->_materias[i]->getType())
            return this->_materias[i]->clone();
    }
    return NULL;
}

void			MateriaSource::printMaterias( void ) const
{
    for (int i = 0; i < MateriaSource::_materias_size; i++)
    {
        if(this->_materias[i] != NULL)
            std::cout << i << " : " << this->_materias[i]->getType()<<std::endl;
        else
            std::cout << i << " : " << "empty"<<std::endl;
    }
}