#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
# define __Constractor " Constructor is Called ."
# define __CopyConstructor " Copy Constructor is Called ."
# define __assignmentOperator " assignment operator is Called." 
# define __Destructor " Destructor is Called ."
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