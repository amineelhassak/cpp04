#include "Cat.hpp"

Cat::Cat ( void )  {
    this->type = "Cat";
    std::cout << "Cat : " << this->type << " Constructor is Called ." << std::endl;
    /*------*/ }

Cat::Cat(const Cat &_Cat)   {
    *this = _Cat;    
    std::cout << "Cat : " << this->type << " Copy Constructor is Called ." << std::endl;
    /*-----*/ }

Cat &Cat::operator =(const Cat &_Cat)    {
    std::cout << "Cat : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_Cat)
        this->type = _Cat.type;
    return ( *this );
       /*----*/    }
void Cat::makeSound ( void ) const  {
    std::cout << "Cat : " << this->type << " miaaaaaaw miaaaaw ." << std::endl;
    /*-----*/  }

Cat::~Cat ( void ) {
    std::cout << "Cat : " << this->type << " Destructor is Called ." << std::endl;
        /*-----*/   }