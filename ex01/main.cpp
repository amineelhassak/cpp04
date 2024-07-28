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
    Animal *_Animal  = new Animal[20];
    for (int i = 0 ; i < 200 ; i++)
    {
        if (!(i % 2))
            _Animal[i] = Cat();
        else
            _Animal[i] = Dog();
    }
    for (int i = 0;i < 20;i++)
        std::cout << "Animal type : " << _Animal[i].getType() << std::endl;
    for (int i = 0 ; i < 20 ; i++)
        delete &_Animal[i];
    return (0);
}