//
// Created by Prime_Games_2 on 01.05.2022.
//

#ifndef EX03_IMATERIASOURCE_H
#define EX03_IMATERIASOURCE_H

#include "AMateria.h"

class IMateriaSource {

public:
    virtual ~IMateriaSource() {}
    virtual void		learnMateria(AMateria *materia_to_learn) = 0;
    virtual AMateria	*createMateria(std::string const & type) = 0;

};


#endif //EX03_IMATERIASOURCE_H
