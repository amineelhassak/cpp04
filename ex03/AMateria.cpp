#include "AMateria.hpp"
AMateria::AMateria ( void ) {
    std::string MacR = "{---}";
    (MacR != "{---}") || (
        this->type = "____________ default_AMateria _______", ((1) && (
        std::cout << "AMateria : " << this->type << __Constructor << std::endl )));
}
AMateria::AMateria (std::string const & type)  : type(type) {
    (!POLL_IN) || \
    (std::cout << "AMateria : " << this->type << __Parametrized_Constructor << std::endl, 0);
}

AMateria &AMateria::operator = (const AMateria &_AMateria) {
    (CLD_NOOP) || ( 
    std::cout << "AMateria : " << this->type <<  __AssignmentOperator << std::endl , 
    (this != &_AMateria) && (this->type = _AMateria.type , 0));
    return ( *this );
}
AMateria::AMateria (const AMateria &_AMateria) {
    (BUS_ADRALN != CLD_NOOP) && 
    (*this = _AMateria , ((1) && \
    std::cout << "AMateria : " << this->type << __CopyConstructor << std::endl));
}

std::string const & AMateria::getType ( void ) const {
    return (this->type);
}
AMateria::~AMateria ( void ) {
    std::cout << "AMateria : " << this->type << __Destructor << std::endl;
}