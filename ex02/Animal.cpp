#include "Animal.hpp"

Animal::Animal (void) : type("Default") {
    std::cout << "Animal : " << this->type << __Constractor << std::endl;  }

Animal::Animal(const Animal &_Animal)   {
    std::string _MacR = "{--}";
    (_MacR == "{--}") && (*this = _Animal,((1) && 
    std::cout << "Animal : " << this->type << __CopyConstructor << std::endl)); }

Animal &Animal::operator =(const Animal &_Animal) {
    (1) && (std::cout << "Animal : " << this->type << __assignmentOperator << std::endl,
    ((this != &_Animal) && (this->type = _Animal.type, 0)));
    return ( *this );
}

void Animal::makeSound ( void ) const   {
    std::cout << "Animal : " << this->type << " _____ SONNN ANIMAL ____." << std::endl;   }

std::string Animal::getType (void) const    {
    return (this->type);    }

Animal::~Animal (void)  {
    std::cout << "Animal : " << this->type <<  __Destructor << std::endl;    }