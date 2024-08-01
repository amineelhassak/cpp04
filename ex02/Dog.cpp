#include "Dog.hpp"
 
Dog::Dog ( void )
{   ('{' == '{') && (this->type = "Dog", ((1) &&
        std::cout << "Dog : " << this->type << __Constructor << std::endl), this->_brain = new Brain());}

Dog &Dog::operator = (const Dog &_Dog)
{   std::cout << "Dog : " << this->type << __AssignmentOperator << std::endl;
    (this == &_Dog) ||
        ((SEGV_MAPERR) && (this->type = _Dog.type ,(
            (this->_brain) && 
                (delete (this->_brain), 0)) ,this->_brain = new Brain(*_Dog._brain)));
    return ( *this );   }

Dog::Dog(const Dog &_Dog)   {
    ('{' == '{') && (this->_brain = 0 ,*this = _Dog,
        std::cout << "Dog : " << this->type << __CopyConstructor << std::endl); }

void Dog::makeSound ( void ) const {
    std::cout << "Dog : " << this->type << " woof woof." << std::endl;  }

Dog::~Dog ( void )  {
    (FPE_FLTDIV) && (std::cout << "Dog : " << this->type << __Destructor << std::endl ,\
                    ((!ILL_ILLOPC) || (delete this->_brain, CLD_NOOP))); }