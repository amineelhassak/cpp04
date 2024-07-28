#include "AMateria.hpp"

AMateria::AMateria () : type("default_Type"){
    std::cout << "AMateria : " << this->type << " Default Constructor is Called ." << std::endl;
}

AMateria::AMateria(std::string const & type)  : type(type) {
        std::cout << "AMateria : " << this->type << " Parametrized Constructor is Called ." << std::endl;
    }

std::string const & AMateria::getType() const{
    return (this->type);
};