//
// Created by Prime_Games_2 on 30.04.2022.
//

#include "Animal.h"

/*Animal::Animal( void )
{
    std::cout << "a c" << std::endl;
}*/
Animal::~Animal()
{
    std::cout << "a d" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "say arrr" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

/*Animal::Animal( const Animal &src )
{
    this->type = src.type;
}*/
