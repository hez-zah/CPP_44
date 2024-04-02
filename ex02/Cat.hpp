#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* Cat_br;
    public:
        Cat();
        ~Cat();
        void    makeSound() const;
        std::string getType() const;
        void    affich_Brain_add(Cat& tmp);
        Cat(Cat const &ref);
        Cat& operator=(Cat const &other);
};




#endif
