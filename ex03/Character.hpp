#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define __ErrorUNEquip "Charactere : Error Unequip "
#define __ErrorEquip "Error Equip ."
class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *box[4];
        AMateria *garb[4];
        void oxe();
    public:
        Character ( void );
        Character ( const std::string &);
        Character (const Character &);
        Character &operator = (const Character &);
        std::string const & getName() const;
        void unequip(int idx);
        void equip(AMateria* m);
        void use(int idx, ICharacter& target);
        ~Character();
};

#endif