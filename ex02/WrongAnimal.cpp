//
// Created by Prime_Games_2 on 30.04.2022.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
    std::cout << "wa c" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "wa d" << std::endl;
}

void WrongAnimal::makeSound() {
    std::cout << type +"wrong say "+voice << std::endl;
}

std::string WrongAnimal::getType()
{
    return this->type;
}