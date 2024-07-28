#include "Character.hpp"

Character::Character ( void ) : name("default_character") {
    std::cout << "Character : default constructor is called ." << std::endl;
}

Character::Character ( std::string &_name) : name(_name) {
    std::cout << "Character : default constructor is called ." << std::endl;
}

Character::Character (const Character &_Character)   {
    *this = _Character;    
    std::cout << "Character : " << this->name << " Copy Constructor is Called ." << std::endl; /*---*/ }

Character &Character::operator =(const Character &_Character)    {
    std::cout << "Character : " << this->name << " assignment operator is Called." << std::endl;
    if (this != &_Character)
        this->name = _Character.name;
    return ( *this );
}

std::string const & Character::getName() const  { 
    return (this->name);
}

void Character::unequip (int idx)    {

}

void Character::equip (AMateria* m)   {
    
}

Character::~Character (  void ) {
    std::cout << "Character : destructor is called ." << std::endl;
}