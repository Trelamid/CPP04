//
// Created by Prime_Games_2 on 01.05.2022.
//

#ifndef EX03_MATERIASOURCE_H
#define EX03_MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.h"
# include "AMateria.h"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource( void );
    MateriaSource( const MateriaSource &src );
    ~MateriaSource( void );
    MateriaSource	&operator=( const MateriaSource &other );
    virtual void		learnMateria(AMateria *materia_to_learn);
    virtual AMateria	*createMateria(std::string const & type);
    void			printMaterias( void ) const ;
private:
    const static int	_materias_size = 4;

    AMateria		*_materias[MateriaSource::_materias_size];
    int			_number_learned;
};



#endif //EX03_MATERIASOURCE_H
