# ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        
    public:
        Cure ( void );
        Cure(const Cure &Cure);
        Cure &operator = (const Cure &);
        AMateria* clone ( void ) const;
        void use(ICharacter& target);
        ~Cure ( void );
};

# endif