#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
# define __Constractor__ "Brain : Constructor is Called ."
# define __CopyConstructor__ "Brain : Copy Constructor is Called ."
# define __assignmentOperator__ "Brain :  assignment operator is Called."
# define __Destructor__ "Brain :  destructor is called ."
class Brain
{
    protected:
        std::string ideas[100];  
    public:
        Brain();
        Brain(const Brain &_Brain);
        Brain &operator = (const Brain &);
        ~Brain ();
};

#endif