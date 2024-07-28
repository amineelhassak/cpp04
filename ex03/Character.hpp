#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
    public:
        Character ( void );
        Character ( std::string &);
        Character (const Character &);
        Character &operator =(const Character &);
        ~Character();
};

#endif