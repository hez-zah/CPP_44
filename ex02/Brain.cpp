#include "Brain.hpp"
#include "AAnimal.hpp"

Brain::Brain()
{
    std::cout << BLUE << "Called Brain Default Constractor" << RESET << std::endl;
}

Brain::~Brain()
{
    std::cout << "Called Brain Deconstractor" << std::endl;
}

Brain::Brain(Brain const &ref)
{
    *this = ref;
    std::cout << "Called Brain Deep copy" << std::endl;
}

Brain& Brain::operator=(Brain const &other)
{
    int i = -1;
    while (++i < 100)
        this->ideas[i] = other.ideas[i];
    std::cout << "Called Brain Assignment operator" << std::endl;
    return (*this);
}

void Brain::set_ideas(std::string str)
{
    int i = -1;
    while (++i < 100)
        (this->ideas)[i] = str;
}

std::string *Brain::get_ideas()
{
    return this->ideas;
}
