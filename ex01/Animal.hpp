#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define __Constractor " Constructor is Called ."
# define __CopyConstructor " Copy Constructor is Called ."
# define __assignmentOperator " assignment operator is Called." 
# define __Destructor " Destructor is Called ."

class Animal
{
    protected :
        std::string     type;
    public  :
        
        std::string getType (void) const ;
        Animal  ( void );
        Animal  (const Animal &);
        Animal &operator = (const Animal &animal);

        virtual void makeSound ( void ) const;
        virtual ~Animal ( void );
};

#endif