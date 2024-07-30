#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include    <iostream>
#include    "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected :
        std::string type;
    public :
        /****************************/
        AMateria ( void );
        AMateria (const AMateria &);
        AMateria &operator = (const AMateria &AMateria);
        virtual ~AMateria ( void );

        /***************************/
            AMateria (std::string const & type);

        /***************************/
            std::string const & getType() const;

        /***************************/
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target) = 0;
};

#endif