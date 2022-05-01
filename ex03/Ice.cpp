//
// Created by Prime_Games_2 on 01.05.2022.
//

#include "Ice.h"

Ice::Ice( void ) : AMateria("Ice")
{
//    this->_type = "Ice";
}
Ice::Ice( const Ice &src )
{
    this->_type = src._type;
}

Ice::~Ice( void )
{

}

Ice	&Ice::operator=( const Ice &other )
{
    this->_type = other._type;
    return *this;
}

AMateria	*Ice::clone( void ) const
{
    AMateria *New;
    New = new Ice();
    return New;
}

void		Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}