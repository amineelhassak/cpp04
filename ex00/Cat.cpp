#include "Cat.hpp"

Cat::Cat ( void )  {
    (FPE_FLTDIV) && (this->type = "Cat", std::cout << "Cat : " \
    << this->type << __Constructor << std::endl , CLD_NOOP);
}

Cat::Cat(const Cat &_Cat)   {
    (ILL_ILLOPC) && (
    *this = _Cat,
    std::cout << "Cat : " << this->type << __CopyConstructor << std::endl);   }

Cat &Cat::operator =(const Cat &_Cat)    {
    std::cout << "Cat : " << this->type << __AssignmentOperator << std::endl;
    (this != &_Cat) && (this->type = _Cat.type, FPE_NOOP);
    return ( *this );
}
void Cat::makeSound ( void ) const  {
    std::cout << "Cat : " << this->type << " meow meow." << std::endl;
}

Cat::~Cat ( void ) {
    std::cout << "Cat : " << this->type << __Destructor << std::endl;
}