#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) : type("Default")  {
    std::cout << "WrongAnimal : " << this->type << " Constructor is Called ." << std::endl;  /*---*/  }

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal)   {
    *this = _WrongAnimal;    
    std::cout << "WrongAnimal : " << this->type << " Copy Constructor is Called ." << std::endl; /*---*/ }

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &_WrongAnimal)    {
    std::cout << "WrongAnimal : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_WrongAnimal)
        this->type = _WrongAnimal.type;
    return ( *this );   /*----*/    }

void WrongAnimal::makeSound ( void ) const   {
    std::cout << "WrongAnimal : " << this->type << " SONNN WrongANIMAL ." << std::endl;
    /*-----*/  }

std::string WrongAnimal::getType (void) const    {
    return (this->type);
    /*----*/    }

WrongAnimal::~WrongAnimal (void)   {
    std::cout << "WrongAnimal : " << this->type << " destructor is called ." << std::endl;  /*---*/   }

