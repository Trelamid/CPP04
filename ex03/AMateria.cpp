//
// Created by Prime_Games_2 on 01.05.2022.
//

#include "AMateria.h"

AMateria::AMateria(const std::string &type)
{
    this->_type = type;
}

AMateria::~AMateria()
{

}

const std::string &AMateria::getType() const
{
    return _type;
}