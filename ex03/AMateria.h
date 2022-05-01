//
// Created by Prime_Games_2 on 01.05.2022.
//

#ifndef EX03_AMATERIA_H
#define EX03_AMATERIA_H

#include <iostream>
#include "ICharacter.h"
#include "Character.h"

class ICharacter;

class AMateria {

protected:
std::string _type;

public:

    AMateria(const std::string &type);
    AMateria(){};
    virtual ~AMateria();

    const std::string &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter& target) = 0;

};


#endif //EX03_AMATERIA_H
