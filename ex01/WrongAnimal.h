//
// Created by Prime_Games_2 on 30.04.2022.
//

#ifndef EX00_WRONGANIMAL_H
#define EX00_WRONGANIMAL_H
#include <iostream>


class WrongAnimal {
protected:
    std::string type;
    std::string voice;
public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound();
    std::string getType();
};


#endif //EX00_WRONGANIMAL_H
