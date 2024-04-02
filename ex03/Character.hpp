#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        AMateria *(inventory[4]);
        std::string name;
    public:
        Character(std::string name);
        ~Character();
        Character(Character const &ref);
        Character& operator=(Character const &other);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};


#endif
