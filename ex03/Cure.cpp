#include "Cure.hpp"
#include "IMateriaSource.hpp"

Cure::Cure():type("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &ref)
{
    *this = ref;
}

Cure&   Cure::operator=(Cure const &other)
{
    this->type = other.type;
    return (*this);
}


std::string const & Cure::getType() const
{
    return (this->type);
}

Cure* Cure::clone() const
{
    Cure *I = new Cure();
    return (I);
}

void Cure::use(ICharacter& target)
{
    std::string name = target.getName();
    std::cout << "* shoots an Cure bolt at " << name << std::endl;
    std::cout << "* heals " << name <<" ’s wounds *" << std::endl;
}
