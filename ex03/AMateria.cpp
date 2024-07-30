#include "AMateria.hpp"

AMateria::AMateria ()
{
    this->type = "____________ default_AMateria _______";
    std::cout << "AMateria : " << this->type << " Default Constructor is Called ." << std::endl;
}

AMateria::AMateria (std::string const & type)  : type(type)
{
        std::cout << "AMateria : " << this->type << " Parametrized Constructor is Called ." << std::endl;
}


AMateria &AMateria::operator = (const AMateria &_AMateria)
{
    std::cout << "AMateria : " << this->type << " assignment operator is Called." << std::endl;
    if (this != &_AMateria)
        this->type = _AMateria.type;
    return ( *this );
}

AMateria::AMateria (const AMateria &_AMateria)
{
    *this = _AMateria;
    std::cout << "AMateria : " << this->type << " Copy Constructor is Called ." << std::endl;
}

std::string const & AMateria::getType ( void ) const
{
    return (this->type);
}

AMateria::~AMateria ( void )    {
    std::cout << "AMateria : " << this->type << " Destructor is Called." << std::endl;
}