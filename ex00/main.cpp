#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
void Leaks(void)
{
    system("leaks Animal");
}

int main()
{
    atexit(Leaks);
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    {
        const WrongAnimal* Wrong_meta = new  WrongAnimal();
        const WrongAnimal* Wrong_i = new WrongCat();
        std::cout << Wrong_i->getType() << " " << std::endl;
        Wrong_i->makeSound();
        Wrong_meta->makeSound();
        delete Wrong_meta;
        delete Wrong_i;
    }
    Animal *t = new Cat;
    t->makeSound();
    delete t;
    return (0);
}