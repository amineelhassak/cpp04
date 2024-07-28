# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain * _brain;
    public:
        Cat ( void );
        Cat(const Cat &Cat);
        Cat &operator = (const Cat &);
        void makeSound ( void ) const;
        ~Cat ( void );
};

# endif
