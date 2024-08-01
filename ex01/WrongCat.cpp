#include "WrongCat.hpp"

WrongCat::WrongCat ( void )  {
    (FPE_FLTDIV) && (this->type = "WrongCat", std::cout << "WrongCat : " \
    << this->type << __Constructor << std::endl , CLD_NOOP);
}

WrongCat::WrongCat(const WrongCat &_WrongCat)   {
    (FPE_FLTOVF - 1) && (*this = _WrongCat,
    std::cout << "WrongCat : " << this->type << __CopyConstructor << std::endl, FPE_NOOP);   }

WrongCat &WrongCat::operator =(const WrongCat &_WrongCat)    {(FPE_FLTDIV != BUS_ADRALN) || ((SEGV_MAPERR) &&
    std::cout << "WrongCat : " << this->type << __AssignmentOperator << std::endl);
    (this != &_WrongCat) && (this->type = _WrongCat.type, FPE_NOOP);
    return ( *this );
}
void WrongCat::makeSound ( void ) const  {
    std::cout << "WrongCat : " << this->type << " meow meow." << std::endl;
}

WrongCat::~WrongCat ( void ) {(1) && (\
    std::cout << "WrongCat : " << this->type << __Destructor << std::endl, SEGV_NOOP);
}