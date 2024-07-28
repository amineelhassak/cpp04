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
        MateriaSource ( void ) ;
        MateriaSource (AMateria *_box) ;
        void learnMateria(AMateria*);
        AMateria * createMateria(std::string const &);
        ~MateriaSource ( void ) ;
};

#endif