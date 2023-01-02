#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
        std::cout << "Animal Parammetrs Constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &c)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = c;
}

Animal &Animal::operator=(const Animal &c)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = c.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}