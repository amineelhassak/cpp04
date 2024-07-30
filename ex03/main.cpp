#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void f()
{
    system("leaks Materia");
}

// int main ( void ) 
// {

//     AMateria *a = new Ice();
//     // IMateriaSource* src = new MateriaSource();
//     // src->learnMateria(new Ice());

//     // src->learnMateria(new Cure());
//     // ICharacter* me = new Character("me");
//     // AMateria* tmp;
//     // tmp = src->createMateria("ice");
//     // me->equip(tmp);
//     // tmp = src->createMateria("cure");
//     // me->equip(tmp);
//     // ICharacter* bob = new Character("bob");
//     // me->use(0, *bob);
//     // me->use(1, *bob);

//     // delete bob;
//     // delete me;
//     // delete src;
//     return (0);
// }

int main ( void )   {

            // atexit(f);
    {
        ////////////////////////////                      Test AMateria                  ///////////////////////////
        AMateria* ice = new Ice();
        AMateria* cure = new Cure();

        // Character *char_ = new Character();

        // ice->use(*char_);
        // cure->use(*char_);
        // AMateria *ice_clone = ice->clone();
        // AMateria *cure_clone = cure->clone();
        
        // delete ice_clone;
        // delete cure_clone;
        // delete char_;
    
        ////////////////////////////                      Test Character                  ///////////////////////////
        ICharacter *Icharacter_ = new Character("____Character___");
        std::cout<< "name is :" << Icharacter_->getName() << std::endl;
        Icharacter_->equip(ice);
        Icharacter_->equip(cure);
        Icharacter_->equip(ice);
        Icharacter_->equip(cure);
        Icharacter_->equip(cure);
        Icharacter_->equip(ice);
        Icharacter_->unequip(0);
        Icharacter_->unequip(1);
        Icharacter_->unequip(0);
        // Icharacter_->equip(ice); errror [1]    94770 illegal hardware instruction  ./AMateria
        // Icharacter_->equip(ice);
        // delete Icharacter_;
        // exit(0);
    }
}