#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria (std::string const & type);
        AMateria ( void );
        AMateria (const AMateria &);
        AMateria &operator = (const AMateria &AMateria);
        std::string const & getType() const;
        AMateria (std::string _type);
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
        virtual ~AMateria ( void );
};

#endif