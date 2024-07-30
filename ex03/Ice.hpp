# ifndef ICE_HPP
# define ICE_HPP

#include    <iostream>
#include    "AMateria.hpp"

class Ice : public AMateria
{
    public:
        /***************************************/
            Ice ( void );
            Ice(const Ice &Ice);
            Ice &operator = (const Ice &);
            ~Ice ( void );

        /***************************************/
            AMateria* clone( void ) const;
            void use(ICharacter& target) ;
};

# endif
