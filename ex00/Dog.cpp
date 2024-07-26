#include <Dog.hpp>

Dog::Dog ( void )  {
    std::cout << "Dog : " << this->type << " Constructor is Called ." << std::endl;
}

Dog::~Dog ( void ) {
    std::cout << "Dog : " << this->type << " Destructor is Called ." << std::endl;
}

Dog &Dog::operator = (const Dog &) {
    std::cout << "Dog : " << this->type << " assignment operator is Called." << std::endl;
};

Dog::Dog(const Dog &dog)
{

}