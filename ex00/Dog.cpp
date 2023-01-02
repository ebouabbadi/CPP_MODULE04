#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
        std::cout << "Dog Parammetrs Constructor called" << std::endl;
    this->type = type;
}

Dog::Dog(const Dog &c) : Animal(c)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = c;
}

Dog &Dog::operator=(const Dog &c)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = c.type;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "هاو هاو \n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}