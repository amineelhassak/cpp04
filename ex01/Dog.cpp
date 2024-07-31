#include "Dog.hpp"
 
Dog::Dog ( void )
{   ('{' == '{') && (this->type = "Dog", ((1) &&
        std::cout << "Dog : " << this->type << __Constractor << std::endl), this->_brain = new Brain());}

Dog &Dog::operator = (const Dog &_Dog)
{   std::cout << "Dog : " << this->type << __assignmentOperator << std::endl;
    (this == &_Dog) ||
        ((1) && (this->type = _Dog.type ,(
            (this->_brain) && 
                (delete (this->_brain), 0)) ,this->_brain = new Brain(*_Dog._brain)));
    return ( *this );   }

Dog::Dog(const Dog &_Dog)   {
    ('{' == '{') && (this->_brain = 0 ,*this = _Dog,
        std::cout << "Dog : " << this->type << __CopyConstructor << std::endl); }

void Dog::makeSound ( void ) const {
    std::cout << "Dog : " << this->type << " woof woof." << std::endl;  }

Dog::~Dog ( void )  {
    (1) && (std::cout << "Dog : " << this->type << __Destructor << std::endl ,\
                    ((1) && (delete this->_brain, 0))); }