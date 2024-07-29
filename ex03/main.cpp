#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

// void f()
// {
//     system("leaks Animal");
// }

// int main ( void ) 
// {
//     // atexit(f);
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

    {
        ////////////////////////////                      Test AMateria                  ///////////////////////////

        AMateria* ice = new Ice();
        AMateria* cure = new Cure();

        Character *char_ = new Character();

        ice->use(*char_);
        cure->use(*char_);

        delete char_;
        delete cure;
        delete ice;
    }
}