#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *(inventory[4]);
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &ref);
        MateriaSource& operator=(MateriaSource const &other);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};


#endif

