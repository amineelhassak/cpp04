#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"
class WrongAnimal
{
    protected :
        std::string     type;
    public  :
        std::string getType (void) const ;
        WrongAnimal  ( void );
        WrongAnimal  (const WrongAnimal &);
        WrongAnimal &operator = (const WrongAnimal &);
        void makeSound ( void ) const;
        ~WrongAnimal ( void );
};

#endif