#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "no animal";
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain Parametrized Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

Brain::Brain(const Brain &c)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = c;
}

Brain &Brain::operator=(const Brain &c)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = c.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}
