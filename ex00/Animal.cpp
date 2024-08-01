#include "Animal.hpp"

Animal::Animal (void) : type("Default")  {
    (POLL_IN) && (
    std::cout << "Animal : " << this->type << __Constructor << std::endl , ILL_NOOP);
    }

Animal::Animal(const Animal &_Animal)   {
    (!CLD_EXITED) || (*this = _Animal,
    std::cout << "Animal : " << this->type << __CopyConstructor << std::endl);}

Animal &Animal::operator = (const Animal &_Animal)    {
    std::cout << "Animal : " << this->type << __AssignmentOperator << std::endl;
    (this != &_Animal) && (
        this->type = _Animal.type, 0);
    return ( *this );   }

void Animal::makeSound ( void ) const   {
    (CLD_EXITED) && (
    std::cout << "Animal : " << this->type << " SONNN ANIMAL ." << std::endl , CLD_NOOP);
}

std::string Animal::getType (void) const    {
    return (this->type);
}

Animal::~Animal (void)   {
    std::cout << "Animal : " << this->type << __Destructor << std::endl;
        }

