#include "Animal.hpp"

Animal::Animal (void) : type("Default")  {
    std::cout << "Animal : " << this->type << " Constructor is Called ." << std::endl;  /*---*/  }

Animal::Animal(const Animal &_Animal)   {
    *this = _Animal;    
    std::cout << "Animal : " << this->type << " Copy Constructor is Called ." << std::endl; /*---*/ }

Animal &Animal::operator =(const Animal &_Animal)    {
    std::cout << "Animal : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_Animal)
        this->type = _Animal.type;
    return ( *this );   /*----*/    }

void Animal::makeSound ( void ) const   {
    std::cout << "Animal : " << this->type << " SONNN ANIMAL ." << std::endl;
    /*-----*/  }

std::string Animal::getType (void) const    {
    return (this->type);
    /*----*/    }

Animal::~Animal (void)   {
    std::cout << "Animal : " << this->type << " destructor is called ." << std::endl;  /*---*/   }

