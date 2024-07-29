#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected :
        std::string type;
    public :
        // base_canonique
        AMateria ( void );
        AMateria (const AMateria &);
        AMateria &operator = (const AMateria &AMateria);
        virtual ~AMateria ( void );

        //parameterized constructor
            AMateria (std::string const & type);
        //getter get_type
            std::string const & getType() const;
        // purment method (class abstract)
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif