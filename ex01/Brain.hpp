#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        void set_ideas(std::string str);
        std::string *get_ideas();
        Brain(Brain const &ref);
        Brain& operator=(Brain const &other);
};



#endif
