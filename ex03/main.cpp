#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void Leaks()
{
    system("leaks Materia");
}

int main ()
{
    // atexit(Leaks);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

// int main()
// {
//     // atexit(f);

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);

//     // tmp = src->createMateria("cure");
//     //  me->equip(tmp);
//     //  tmp = src->createMateria("cure");
//     //   me->equip(tmp);
//     //   tmp = src->createMateria("cure");
//     //    me->equip(tmp);
//     //    tmp = src->createMateria("cure");
//     //     me->equip(tmp);
//     //     tmp = src->createMateria("cure");
//     //      me->equip(tmp);
//     //      tmp = src->createMateria("cure");
//     //       me->equip(tmp);
//     //       tmp = src->createMateria("cure");
//     //        me->equip(tmp);

//     AMateria *ice = new Ice();
//     AMateria *cure = new Cure();
//     ICharacter* character = new Character("character");
//     character->equip(ice);
//     character->equip(cure);
//     character->equip(ice);
//     character->equip(cure);
//     character->equip(cure);
//     character->unequip(0);
//     character->unequip(0);
//     character->equip(cure);
//     // delete character;
//     // delete me;
//     // delete src;
//     return 0;
// }