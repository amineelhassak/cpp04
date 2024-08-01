#include "Brain.hpp"
Brain::Brain (void) {
    for (int i = 0; i < 100; i++) this->ideas[i] = "IDEAS";
    std::cout << __Constructor__ << std::endl;
}
Brain::Brain(const Brain &_Brain)   {
    (ILL_ILLOPC) && ( *this = _Brain,
    std::cout << __CopyConstructor__ << std::endl);
}
Brain &Brain::operator = (const Brain &_brain)
{   std::cout << __AssignmentOperator__ << std::endl;
    if (this != &_brain)
        for (int i = 0; i < 100; i++)   this->ideas[i] = _brain.ideas[i];
    return ( *this );   }
Brain::~Brain (void)    { (FPE_FLTDIV == BUS_ADRALN) && ((SEGV_MAPERR) && 
    std::cout << __Destructor__ << std::endl);    }