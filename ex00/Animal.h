//
// Created by Prime_Games_2 on 30.04.2022.
//

#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H

#include <iostream>


class Animal {
protected:
    std::string type;
    std::string voice;
public:
    Animal( void );
    Animal( const Animal &src );
    ~Animal();
    void makeSound() const;
    std::string getType() const;
};


#endif //EX00_ANIMAL_H
