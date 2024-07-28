#include "Dog.hpp"

Dog::Dog ( void )  {
    this->type = "Dog";
    std::cout << "Dog : " << this->type << " Constructor is Called ." << std::endl;
    this->_brain = new Brain();
    /*-----*/   }

Dog::Dog(const Dog &_Dog)   {
    *this = _Dog;    
    std::cout << "Dog : " << this->type << " Copy Constructor is Called ." << std::endl;
         /*---*/    }

Dog &Dog::operator =(const Dog &_Dog)    {
    std::cout << "Dog : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_Dog)
        this->type = _Dog.type;
    return ( *this );   /*----*/    }

void Dog::makeSound ( void )  const     {
    std::cout << "Dog : " << this->type << " Haaaaw Haaaw ." << std::endl;
    /*-----*/  }

Dog::~Dog ( void ) {
    std::cout << "Dog : " << this->type << " Destructor is Called ." << std::endl;
    delete this->_brain;
        /*-----*/   }