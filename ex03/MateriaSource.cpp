#include "MateriaSource.hpp"


MateriaSource::MateriaSource ( void )
{
    for (int i = 0; i < 4 ; i++)
        this->box[i] = NULL;
    std::cout << "MateriaSource : default constructor is called ." << std::endl;
}

MateriaSource::MateriaSource (const MateriaSource &_MateriaSource)  
{
    *this = _MateriaSource;    
    std::cout << "MateriaSource : Copy Constructor is Called ." << std::endl;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &_MateriaSource)
{
    std::cout << "MateriaSource : assignment operator is Called." << std::endl;
    if (this != &_MateriaSource)
    {
        for (int i = 0; i < 4 ; i++)
            (1) && (delete this->box[i],this->box[i] = 0);
        for (int i = 0; i< 4 ; i++)
            if (_MateriaSource.box[i])
                *(this->box[i]) = _MateriaSource.box[i]->clone();
    }
    return ( *this );
}

void    MateriaSource::learnMateria(AMateria* _Amateria) {
    int count = 0;
    for(;this->box[count]; count++)
        {}
    if (count < 4 && _Amateria)
        (1) && (this->box[count] = _Amateria, std::cout << "Materia " << _Amateria->getType() << " learned\n");
    else
        (1) && (std::cout << "MateriaSource : Error in Learning Materia." << std::endl , delete _Amateria, 0);
}

AMateria *MateriaSource::createMateria(std::string const &type)   {
    for(int i = 0; i < 4; i++)
        if (box[i]->getType() == type)
            return (box[i]->clone());
    return (0);
}

MateriaSource::~MateriaSource (  void ) {
    for (int i = 0; this->box[i];i++)
        (1) && (delete (this->box[i]),this->box[i] = NULL);
    std::cout << "MateriaSource : destructor is called ." << std::endl;
}