#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* Dog_br;
    public:
        Dog();
        ~Dog();
        void    makeSound() const;
        std::string getType() const;
        void    affich_Brain_add(Dog& tmp);
        Dog(Dog const &ref);
        Dog& operator=(Dog const &other);
};


#endif
