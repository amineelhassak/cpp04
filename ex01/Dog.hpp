# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
# define __Constructor " Constructor is Called ."
# define __CopyConstructor " Copy Constructor is Called ."
# define __AssignmentOperator " assignment operator is Called." 
# define __Destructor " Destructor is Called ."
class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog ( void );
        Dog (const Dog &dog);
        Dog &operator = (const Dog &);
        void makeSound ( void ) const;
        ~Dog ( void );
};

# endif