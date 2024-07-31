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
    Animal *_Animal  = new Animal[20];
    for (int i = 0 ; i < 20 ; i++)
    {
        if (!(i % 2))
            _Animal[i] = Cat();
        else
            _Animal[i] = Dog();
    }
    for (int i = 0; i < 20; i++)
        std::cout << "Animal type : " << _Animal[i].getType() << std::endl;
    return (delete[] _Animal, 0);
}