#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Called Dog Default Constractor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Called Dog Deconstractor" << std::endl;
}
Dog::Dog(Dog const &fix)
{
    *this = fix;
    std::cout << "Called Dog Copy" << std::endl;
}

Dog& Dog::operator=(Dog const &other)
{
    this->type = other.type;
    std::cout << "Called Dog Assignment operator" << std::endl;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Sound of the " << this->type << " is barking" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
