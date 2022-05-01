//
// Created by Prime_Games_2 on 30.04.2022.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat:public Animal {
public:
    Cat();
    ~Cat();
    virtual void makeSound() const;
private:
    Brain *brain;
};


#endif //EX00_CAT_H
