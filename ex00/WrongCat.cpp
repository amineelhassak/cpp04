#include "WrongCat.hpp"

WrongCat::WrongCat ( void )  {
    this->type = "WrongCat";
    std::cout << "WrongCat : " << this->type << " Constructor is Called ." << std::endl;
    /*------*/ }

WrongCat::WrongCat(const WrongCat &_WrongCat)   {
    *this = _WrongCat;    
    std::cout << "WrongCat : " << this->type << " Copy Constructor is Called ." << std::endl;
    /*-----*/ }

WrongCat &WrongCat::operator =(const WrongCat &_WrongCat)    {
    std::cout << "WrongCat : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_WrongCat)
        this->type = _WrongCat.type;
    return ( *this );
       /*----*/    }
void WrongCat::makeSound ( void ) const  {
    std::cout << "WrongCat : " << this->type << " miaaaw miaaaaw." << std::endl;
    /*-----*/  }

WrongCat::~WrongCat ( void ) {
    std::cout << "WrongCat : " << this->type << " Destructor is Called ." << std::endl;
        /*-----*/   }