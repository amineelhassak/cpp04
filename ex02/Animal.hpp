#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string     type;
    public  :
        std::string getType (void) const ;
        Animal  ( void );
        Animal  (const Animal &);
        Animal &operator = (const Animal &animal);
        virtual void makeSound ( void ) const = 0;
        virtual ~Animal ( void );
};

#endif