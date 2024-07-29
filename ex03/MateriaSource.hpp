#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    protected :
        AMateria *box[4];
        static int index;
    public :
        MateriaSource &operator = (const MateriaSource &_MateriaSource);
        MateriaSource (const MateriaSource &_MateriaSource);
        MateriaSource ( void ) ;
        ~MateriaSource ( void ) ;

        void learnMateria(AMateria*);
        AMateria * createMateria(std::string const &);
};

#endif