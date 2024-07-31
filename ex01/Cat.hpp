# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# define __Constractor " Constructor is Called ."
# define __CopyConstructor " Copy Constructor is Called ."
# define __assignmentOperator " assignment operator is Called." 
# define __Destructor " Destructor is Called ."
class Cat : public Animal
{
    private:
        Brain * _brain;
    public:
        Cat ( void );
        Cat (const Cat &Cat);
        Cat &operator = (const Cat &);
        void makeSound ( void ) const;
        ~Cat ( void );
};

# endif
