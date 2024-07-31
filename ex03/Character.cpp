#include "Character.hpp"

Character::Character ( void ) : name("____________ default_character _______")
{
    for (int i = 0; i <4; i++)  this->box[i] = NULL;
    for (int i = 0; i <4; i++)  this->garb[i] = NULL;
    std::cout << "Character : "<< this->name << " default constructor is called ." << std::endl;
}

Character::Character ( const std::string &_name) : name(_name)
{
    for (int i = 0; i < 4 ; i++)    this->box[i] = NULL;
    for (int i = 0; i <4; i++)  this->garb[i] = NULL;
    std::cout << "Character : " << this->name << " default constructor is called ." << std::endl;
}


Character &Character::operator = (const Character &_Character)
{
    std::cout << "Character : " << this->name << " assignment operator is Called." << std::endl;
    if (this != &_Character)
    {
        for (int i = 0;i < 4;i++)
        {
            delete this->box[i];
            this->box[i] = NULL;
        }
        for (int i = 0;i < 4; i++)
        {
            if (_Character.box[i])
                this->box[i] = _Character.box[i]->clone();
        }
        this->name = _Character.name;
    }
    return (this->oxe(), *this);
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
    if  ( idx < 4 && idx >= 0 && box[idx])
    {
        this->garb[idx] = box[idx];
        std::cout<< "Charactere : "<< box[idx]->getType() <<" pos ====> "<< idx << " Unequip " << std::endl;
        box[idx] = NULL;
    }
    else    std::cout<< "Charactere : Error Unequip " << std::endl;
}

void Character::equip (AMateria* m)
{
    for(int i = 0;i < 4;i++)
    {
        if (!box[i])
        {
            std::cout << "Character : " << this->name << "in pos =====> " << i << " Equip ." << std::endl;
            this->box[i] = m;
            this->oxe();
            return ;
        }
    }
    (1) && (std::cout << "Character : " << this->name << "Error Equip ." << std::endl ,delete m, 0);
    this->oxe();
}

void Character::oxe()
{
    for (int i = 0; i < 4; i++) (1) && (delete (this->garb[i]) ,this->garb[i] = NULL);
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->box[idx])
        this->box[idx]->use(target);
}

Character::~Character (  void )
{
    int i = 0;
    for(i = 0; i < 4 ; i++)  (1) && (delete (this->garb[i]) ,this->garb[i] = NULL);
    for(i = 0; i< 4 ; i++)   (1) && (delete (this->box[i]) ,this->box[i] = NULL);
    std::cout << "Character : destructor is called ." << std::endl;
}