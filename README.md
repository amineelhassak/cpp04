# cpp04

## Classes et Concepts en C++

### Classe Abstraite
Une classe abstraite est une classe qui ne peut pas être instanciée seule et qui est conçue pour être héritée par d'autres classes. Elle contient généralement au moins une méthode virtuelle pure.

### Méthode Virtuelle Pure
Une méthode virtuelle pure est une méthode déclarée dans une classe de base mais qui n'a pas d'implémentation dans cette classe. Elle est définie en utilisant `= 0`. Les classes dérivées doivent fournir une implémentation pour cette méthode, sinon elles seront également abstraites.

### Interface
Une interface est généralement une classe qui ne contient que des méthodes virtuelles pures. Elle ne contient pas de données membres ni d'implémentations de méthodes. Une interface définit uniquement les fonctions que les classes dérivées doivent implémenter.

### Polymorphisme
Le polymorphisme est un concept de programmation orientée objet qui permet à des objets de différents types de répondre à la même interface. En C++, cela est généralement réalisé via des pointeurs ou des références à des classes de base. Le polymorphisme permet d'écrire du code plus flexible et réutilisable, en permettant aux fonctions de manipuler des objets de différentes classes dérivées de manière uniforme.

---

### Exemple de Code

```cpp
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;  // Attribut protégé, accessible aux classes dérivées

    public:
        // Constructeur par défaut
        AMateria(void);

        // Constructeur par copie
        AMateria(const AMateria &);

        // Opérateur d'affectation
        AMateria &operator=(const AMateria &AMateria);

        // Destructeur virtuel
        virtual ~AMateria(void);

        // Constructeur paramétré
        AMateria(std::string const & type);

        // Getter pour le type
        std::string const & getType() const;

        // Méthode virtuelle pure, fait de cette classe une classe abstraite
        virtual AMateria* clone() const = 0;

        // Méthode virtuelle, pas encore implémentée
        // virtual void use(ICharacter& target);
};
#endif

