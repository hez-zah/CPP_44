#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        void    makeSound() const;
        std::string getType() const;
        Dog(Dog const &fix);
        Dog& operator=(Dog const &other);
};


#endif
