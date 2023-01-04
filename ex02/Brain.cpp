#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "siuuuu";
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain Parametrized Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

Brain::Brain(const Brain &c)
{
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = c;
}

Brain &Brain::operator=(const Brain &c)
{
    std::cout << "Brain Copy assignment operator" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = c.ideas[i];
    return (*this);
}

std::string *Brain::getidea()
{
    return (this->ideas);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}
