#include "MateriaSource.hpp"

int MateriaSource::index = 0;

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
        for (int i = 0; this->box[i]; i++)
            *(this->box[i]) = *(_MateriaSource.box[i]);
    return ( *this );
}

void MateriaSource::learnMateria(AMateria* _Amateria) {
    if (index < 4 && _Amateria)
    {
        this->box[index] = _Amateria;
        index++;
        std::cout << "Materia " << _Amateria->getType() << " learned\n";
    }
    else
    {
        std::cout << "MateriaSource : Error in Learning Materia." << std::endl;
        delete _Amateria;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)   {
    for(int i = 0;i < 4;i++)
    {
        if (box[i]->getType() == type)
            return (box[i]->clone());
    }
    return (0);
}

MateriaSource::~MateriaSource (  void ) {
    for(int i = 0; this->box[i];i++)
    {
        delete (this->box[i]);
        this->box[i] = NULL;
    }
    std::cout << "MateriaSource : destructor is called ." << std::endl;
}