#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//Test Leaks
void Leaks(void)
{
    system("leaks Animal");
}

int main ( void )
{
    Animal *_Animal_dog  = new Dog;
    Animal *_Animal_cat  = new Cat;
    std::cout << "Animal type : " << _Animal_dog->getType() << std::endl;
    std::cout << "Animal type : " << _Animal_cat->getType() << std::endl;
    return (delete _Animal_dog, delete _Animal_cat, 0);
}