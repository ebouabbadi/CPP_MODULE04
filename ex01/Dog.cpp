#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    Brain *br = NULL;
}

Dog::Dog(std::string type)
{
    std::cout << "Dog Parametrized Constructor called" << std::endl;
    this->type = type;
    Brain *br = new Brain;
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

void Dog::makeSound() const
{
    std::cout << " haw haw\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}