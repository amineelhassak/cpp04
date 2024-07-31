#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) {
    (1) && (this->type = "WrongCat",
    std::cout << "WrongCat : " << this->type << __Constractor << std::endl);    }

WrongCat::WrongCat(const WrongCat &_WrongCat)   {
    (1) && (*this = _WrongCat ,
    std::cout << "WrongCat : " << this->type << __CopyConstructor << std::endl);   }

WrongCat &WrongCat::operator =(const WrongCat &_WrongCat)   {
    std::cout << "WrongCat : " << this->type << __assignmentOperator << std::endl;
    (this != &_WrongCat) && (this->type = _WrongCat.type , 0);
    return ( *this );   }

void WrongCat::makeSound ( void ) const {
    std::cout << "Cat : " << this->type << " meooooow meooooow." << std::endl; }

WrongCat::~WrongCat ( void )    {
    std::cout << "WrongCat : " << this->type << __Destructor << std::endl; }