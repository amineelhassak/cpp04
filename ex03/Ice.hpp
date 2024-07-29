# ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        
    public:
        Ice ( void );
        Ice(const Ice &Ice);
        Ice &operator = (const Ice &);
        AMateria* clone( void ) const;
        void use(ICharacter& target) ;
        ~Ice ( void );
};

# endif
