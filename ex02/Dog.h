//
// Created by Prime_Games_2 on 30.04.2022.
//

#ifndef EX00_DOG_H
#define EX00_DOG_H


#include "Animal.h"
#include "Brain.h"

class Dog:public Animal {
public:
    Dog();
    ~Dog();
    virtual void makeSound() const;
private:
    Brain *brain;
};


#endif //EX00_DOG_H
