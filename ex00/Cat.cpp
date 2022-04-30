//
// Created by Prime_Games_2 on 30.04.2022.
//

#include "Cat.h"

Cat::Cat()
{
    this->type = "Cat";
    this->voice = "Myau";
    std::cout << "c c" << std::endl;
}
Cat::~Cat()
{
    std::cout << "c d" << std::endl;
}