//
// Created by Prime_Games_2 on 30.04.2022.
//

#include "Dog.h"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain;
    std::cout << "d c" << std::endl;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "d d" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "GAV GAV GAV GAV GAV GAV GAV GAV GAV " << std::endl;
}