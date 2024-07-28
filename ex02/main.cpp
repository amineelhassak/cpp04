#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
void f(void)
{
    system("leaks Animal");
}

int main()
{
    Cat cat; 
    Dog  dog;
    cat.makeSound ();
    dog.makeSound ();
    Animal *_Animal1 = &cat;
    Animal *_Animal2 = &dog;
    _Animal1->makeSound ();
    _Animal2->makeSound ();
    return (0);
}