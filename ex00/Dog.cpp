#include "Dog.hpp"

Dog::Dog ( void )  {
    (FPE_FLTDIV) && (this->type = "Dog", std::cout << "Dog : " \
    << this->type << __Constructor << std::endl , CLD_NOOP);
}

Dog::Dog(const Dog &_Dog)   {
    (FPE_FLTOVF == ILL_ILLOPC + 1) && (*this = _Dog,
    std::cout << "Dog : " << this->type << __CopyConstructor << std::endl);   }

Dog &Dog::operator =(const Dog &_Dog)    {
    std::cout << "Dog : " << this->type << __AssignmentOperator << std::endl;
    (this != &_Dog) && (this->type = _Dog.type, FPE_NOOP);
    return ( *this );
}
void Dog::makeSound ( void ) const  {
    std::cout << "Dog : " << this->type << " Haaaaw Haaaw ." << std::endl;
}

Dog::~Dog ( void ) {
    std::cout << "Dog : " << this->type << __Destructor << std::endl;
}