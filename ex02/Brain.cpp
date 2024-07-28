#include "Brain.hpp"

Brain::Brain (void) {
    std::cout << "Brain : Constructor is Called ." << std::endl;  /*---*/  }

Brain::Brain(const Brain &_Brain)   {
    *this = _Brain;
    std::cout << "Brain : Copy Constructor is Called ." << std::endl; /*---*/ }

Brain &Brain::operator =(const Brain &_brain)    {
    std::cout << "Brain :  assignment operator is Called." << std::endl;
    if (this != &_brain)
        for (int i = 0; i < (int)this->ideas->size(); i++)
            this->ideas[i] = _brain.ideas[i];
    return ( *this );   /*----*/    }

Brain::~Brain (void)   {
    std::cout << "Brain :  destructor is called ." << std::endl;  /*---*/   }





