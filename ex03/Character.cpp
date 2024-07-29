#include "Character.hpp"

Character::Character ( void ) : name("default_character") {
    for(int i = 0; i <4;i++)
        this->box[i] = NULL;
    std::cout << "Character : default constructor is called ." << std::endl;
}

Character::Character ( const std::string &_name) : name(_name) {
    for(int i = 0; i <4;i++)
        this->box[i] = NULL;
    std::cout << "Character : default constructor is called ." << std::endl;
}

Character::Character (const Character &_Character)   {
    *this = _Character;    
    std::cout << "Character : " << this->name << " Copy Constructor is Called ." << std::endl; /*---*/ }

Character &Character::operator =(const Character &_Character)    {
    std::cout << "Character : " << this->name << " assignment operator is Called." << std::endl;
    if (this != &_Character)
        this->name = _Character.name;
    for (int i = 0; i < 4; i++)
    {
        delete (this->garb[i]);
        this->garb[i] = NULL;
    }
    return ( *this );
}

std::string const & Character::getName() const  { 
    return (this->name);
}

void Character::unequip (int idx)
{
    if (box[idx])
    {
        this->garb[idx] = box[idx];
        box[idx] = NULL;
    }
}

void Character::equip (AMateria* m)   {
    int count = 0;
    for(;box[count];count++){}
    if (count < 4)
    {
        //msg
        this->box[count] = m;
        
    }
    else
    {
        //msg
        delete m;
    }
    for (int i = 0; i < 4; i++)
    {
        delete (this->garb[i]);
        this->garb[i] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    this->box[idx]->use(target);
}

Character::~Character (  void ) {
    for(int i = 0; this->garb[i];i++)
    {
        delete (this->garb[i]);
        this->garb[i] = NULL;
    }
    for(int i = 0; this->box[i];i++)
    {
        delete (this->box[i]);
        this->box[i] = NULL;
    }
    std::cout << "Character : destructor is called ." << std::endl;
}