//
// Created by Prime_Games_2 on 01.05.2022.
//

#include "Cure.h"
#include <iostream>

Cure::Cure( void ) : AMateria("Cure")
{
//    this->_type = "Cure";
}
Cure::Cure( const Cure &src )
{
    this->_type = src._type;
}

Cure::~Cure( void )
{

}

Cure	&Cure::operator=( const Cure &other )
{
    this->_type = other._type;
    return *this;
}

AMateria	*Cure::clone( void ) const
{
    AMateria *New;
    New = new Cure();
    return New;
}

void		Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}