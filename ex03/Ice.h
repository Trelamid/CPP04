//
// Created by Prime_Games_2 on 01.05.2022.
//

#ifndef EX03_ICE_H
#define EX03_ICE_H

#include "AMateria.h"

class Ice : public AMateria{
public:
    Ice( void );
    Ice( const Ice &src );
    ~Ice( void );
    Ice		&operator=( const Ice &other );
    virtual AMateria	*clone( void ) const ;
    virtual void		use(ICharacter& target);
};


#endif //EX03_ICE_H
