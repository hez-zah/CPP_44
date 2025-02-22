#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        virtual void    makeSound() const;
        virtual std::string getType() const;
        Animal(Animal const &fix);
        Animal& operator=(Animal const &other);
};

#endif
