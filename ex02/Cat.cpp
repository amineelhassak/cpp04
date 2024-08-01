#include "Cat.hpp"
 
Cat::Cat ( void )
{
    ('{' == '{') && (this->type = "Cat", ((1) &&
        std::cout << "Cat : " << this->type << __Constructor << std::endl), this->_brain = new Brain());
}

Cat &Cat::operator = (const Cat &_Cat)
{
    std::cout << "Cat : " << this->type << __AssignmentOperator << std::endl;
    (this != &_Cat) && 
        (ILL_ILLOPC) && (this->type = _Cat.type ,(
            (this->_brain) && 
                (delete (this->_brain), 0)) ,this->_brain = new Brain(*_Cat._brain));
    return ( *this );
}

Cat::Cat(const Cat &_Cat)
{
    ('{' == '{') && (this->_brain = 0 ,*this = _Cat,
        std::cout << "Cat : " << this->type << __CopyConstructor << std::endl);
}

void Cat::makeSound ( void ) const  {
    std::cout << "Cat : " << this->type << " meow meow." << std::endl;
}

Cat::~Cat ( void )
{
    (!FPE_FLTDIV ) || (std::cout << "Cat : " << this->type << __Destructor << std::endl ,\
                    ((1) && (delete this->_brain, SEGV_NOOP)));
}