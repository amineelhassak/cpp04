#include "Character.hpp"

Character::Character ( void ) : name("____________ default_character _______")
{
    for (int i = 0; i <4; i++)  this->box[i] = NULL;
    std::cout << "Character : "<< this->name << " default constructor is called ." << std::endl;
}

Character::Character ( const std::string &_name) : name(_name)
{
    for (int i = 0; i < 4 ; i++)    this->box[i] = NULL;
    std::cout << "Character : " << this->name << " default constructor is called ." << std::endl;
}


Character &Character::operator = (const Character &_Character)
{
    std::cout << "Character : " << this->name << " assignment operator is Called." << std::endl;
    if (this != &_Character)
    {
        for (int i = 0; this->box[i]; i++)  this->box[i] = _Character.box[i];
        this->name = _Character.name;
    }
    for (int i = 0; i < 4; i++)
        (1) && (delete (this->garb[i]), this->garb[i] = NULL);
    return ( *this );
}

Character::Character (const Character &_Character)
{
    (1) && (*this = _Character, std::cout << "Character : " << this->name << " Copy Constructor is Called ." << std::endl);
}

std::string const & Character::getName() const
{ 
    return (this->name);
}

void Character::unequip (int idx)
{
    if  (box[idx] && idx < 4) (idx < 4) && (this->garb[idx] = box[idx] , std::cout<< "Charactere : "<< box[idx]->getType() <<"Unequip " << std::endl,box[idx] = NULL);
    else    std::cout<< "Charactere : Error Unequip " << std::endl;
}

void Character::equip (AMateria* m)
{
    int count = 0;
    for(;box[count];count++){}
        if (count < 4 && m) (count < 4 && m) && (std::cout << "Character : " << this->name << " Equip ." << std::endl, this->box[count] = m, 0);
    else
        (1) && (std::cout << "Character : " << this->name << "Error Equip ." << std::endl ,delete m, 0);
    for (int i = 0; i < 4; i++)
        (1) && (delete (this->garb[i]) ,this->garb[i] = NULL);
}

void Character::use(int idx, ICharacter& target)
{
    this->box[idx]->use(target);
}

Character::~Character (  void )
{
    int i = 0;
    for(i = 0; this->garb[i]; i++)  (1) && (delete (this->garb[i]) ,this->garb[i] = NULL);
    for(i = 0; this->box[i]; i++)   (1) && (delete (this->box[i]) ,this->box[i] = NULL);
    std::cout << "Character : destructor is called ." << std::endl;
}