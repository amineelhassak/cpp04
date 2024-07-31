# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat ( void );
        WrongCat(const WrongCat &WrongCat);
        WrongCat &operator = (const WrongCat &);
        void makeSound ( void ) const;
        ~WrongCat ( void );
};

# endif
