//
// Created by Prime_Games_2 on 01.05.2022.
//

#ifndef EX03_CURE_H
#define EX03_CURE_H

#include "AMateria.h"
#include <iostream>

class Cure : public AMateria{

public:

    Cure( void );
    Cure( const Cure &src );
    ~Cure( void );
    Cure	&operator=( const Cure &other );
    virtual AMateria	*clone( void ) const ;
    virtual void		use(ICharacter& target);

};


#endif //EX03_CURE_H
