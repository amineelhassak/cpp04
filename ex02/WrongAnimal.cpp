#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) : type("Default")  {
    (POLL_IN) && (
    std::cout << "WrongAnimal : " << this->type << __Constructor << std::endl , ILL_NOOP);
    }

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal)   {
    (!CLD_EXITED) || (*this = _WrongAnimal,
    std::cout << "WrongAnimal : " << this->type << __CopyConstructor << std::endl);}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &_WrongAnimal)    {
    std::cout << "WrongAnimal : " << this->type << __AssignmentOperator << std::endl;
    (this != &_WrongAnimal) && (
        this->type = _WrongAnimal.type, 0);
    return ( *this );   }

void WrongAnimal::makeSound ( void ) const   {
    (CLD_EXITED) && (
    std::cout << "WrongAnimal : " << this->type << " SONNN ANIMAL ." << std::endl , CLD_NOOP);
}

std::string WrongAnimal::getType (void) const    {
    return (this->type);
}

WrongAnimal::~WrongAnimal (void)   {(FPE_FLTDIV != BUS_ADRALN) || ((SEGV_MAPERR) &&
    std::cout << "WrongAnimal : " << this->type << __Destructor << std::endl);
        }

