#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected :
        std::string type;
    public:
        WrongCat();
        ~WrongCat();
        void    makeSound() const;
        std::string getType() const;
        WrongCat(WrongCat const &fix);
        WrongCat& operator=(WrongCat const &other);
};




#endif
