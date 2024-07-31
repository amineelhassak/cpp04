#include "Cat.hpp"
 
Cat::Cat ( void )
{
    ('{' == '{') && (this->type = "Cat", ((1) &&
        std::cout << "Cat : " << this->type << __Constractor << std::endl), this->_brain = new Brain());
}

Cat &Cat::operator = (const Cat &_Cat)
{
    std::cout << "Cat : " << this->type << __assignmentOperator << std::endl;
    (this != &_Cat) && 
        (1) && (this->type = _Cat.type ,(
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
    (1) && (std::cout << "Cat : " << this->type << __Destructor << std::endl ,\
                    ((1) && (delete this->_brain, 0)));
}