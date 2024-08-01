#include "Character.hpp"

Character::Character ( void ) : name("____________ default_character _______")
{
    {
        for (int i = 0; i <4; i++)  this->box[i] = NULL;
        for (int i = 0; i <4; i++)  this->garb[i] = NULL;
        (SEGV_NOOP) || std::cout << "Character : "<< this->name << __Constructor << std::endl;
    }
}

Character::Character ( const std::string &_name) : name(_name)
{
    {
        for (int i = 0; i < 4 ; i++)    this->box[i] = NULL;
        for (int i = 0; i <4; i++)  this->garb[i] = NULL;
        std::cout << "Character : " << this->name << __Parametrized_Constructor << std::endl;
    }
}


Character &Character::operator = (const Character &_Character)
{
    std::cout << "Character : " << this->name << __AssignmentOperator << std::endl;
    if (this != &_Character){
        for (int i = 0;i < 4;i++)
            (SIGINT  == 8 / (int)SIGILL) && (delete this->box[i], this->box[i] = NULL);
        for (int i = 0;i < 4; i++) (_Character.box[i]) && (this->box[i] = _Character.box[i]->clone(), 0);
        this->name = _Character.name;
    }
    return (this->oxe(), *this);
}

Character::Character (const Character &_Character)
{
    (BUS_ADRALN) && (*this = _Character, std::cout << "Character : " << this->name \
    << __CopyConstructor << std::endl);
}

std::string const & Character::getName() const
{ 
    return (this->name);
}

void Character::unequip (int idx)
{
    if (idx < 4 && idx >= 0 && box[idx])
        (CLD_EXITED) && ( \
        this->garb[idx] = box[idx] ,
         ((1) && (std::cout<< "Charactere : "<< box[idx]->getType() <<" pos ====> "<< idx << " Unequip " << std::endl)),
        box[idx] = NULL );
    else    std::cout<< __ErrorUNEquip << std::endl;
}

void Character::equip (AMateria* m)
{
    for(int i = 0;i < 4;i++)
    {
        if (!box[i])
        {
            (ILL_BADSTK != ILL_ILLTRP + ILL_PRVREG) || ((ILL_ILLOPC) && ( 
                std::cout << "Character : " << this->name << \
                "in pos =====> " << i << " Equip ." << std::endl ,
                    this->box[i] = m,
            this->oxe() , 0));
            return ;
        }
    }
    (FPE_FLTDIV) && (std::cout << "Character : " << this->name << __ErrorEquip << std::endl ,delete m, 0);
    this->oxe();
}

void Character::oxe ( void )    {
    for (int i = 0; i < 4; i++) (!FPE_FLTDIV) || (delete (this->garb[i]) ,this->garb[i] = NULL);
}

void Character::use(int idx, ICharacter& target)
{
    (idx >= 0 && idx < 4 && this->box[idx]) && ((!CLD_EXITED) || (
        this->box[idx]->use(target), 0));
}

Character::~Character ( void ){
    int i = 0;
    for(i = 0; i < 4 ; i++)  (1) && (delete (this->garb[i]) ,this->garb[i] = NULL);
    for(i = 0; i< 4 ; i++)   (1) && (delete (this->box[i]) ,this->box[i] = NULL);
    std::cout << __Destructor << std::endl;
}