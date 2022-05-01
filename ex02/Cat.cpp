//
// Created by Prime_Games_2 on 30.04.2022.
//

#include "Cat.h"

Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "c c" << std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "c d" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "MUUUUUUUUUUUUUUUUUUUUUYAAAAAAAAAUUUU" << std::endl;
}