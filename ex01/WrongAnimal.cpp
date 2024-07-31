#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) : type("Default")   {
    std::cout << "WrongAnimal : " << this->type << __Constractor << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal)   {
    (1) && (*this = _WrongAnimal ,
    std::cout << "WrongAnimal : " << this->type << __CopyConstructor << std::endl);    }

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &_WrongAnimal)   {
    std::cout << "WrongAnimal : " << this->type << __assignmentOperator << std::endl;
    (this != &_WrongAnimal) && (this->type = _WrongAnimal.type , 0);
    return ( *this );
}

void WrongAnimal::makeSound ( void ) const  {
    std::cout << "WrongAnimal : " << this->type << " SONNN WrongANIMAL ." << std::endl;
}

std::string WrongAnimal::getType (void) const   {
    return (this->type);    }

WrongAnimal::~WrongAnimal (void)    {
    std::cout << "WrongAnimal : " << this->type << __Destructor << std::endl;  }

