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
    // atexit(Leaks);
    Animal *_Animal  = new Animal[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        if (!(i % 2))
            _Animal[i] = Cat();
        else
            _Animal[i] = Dog();
    }
    for (int i = 0; i < 5; i++)
        std::cout << "Animal type : " << _Animal[i].getType() << std::endl;
    return (delete[] _Animal, 0);
}