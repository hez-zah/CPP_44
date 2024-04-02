#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
    private:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        void    makeSound() const;
        std::string getType() const;
        WrongAnimal(WrongAnimal const &fix);
        WrongAnimal& operator=(WrongAnimal const &other);
};



#endif
