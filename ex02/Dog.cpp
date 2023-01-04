#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor" << std::endl;
    br = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog &c) : Animal(c)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    this->br = nullptr;
    *this = c;
}

Dog &Dog::operator=(const Dog &c)
{
    std::cout << "Dog Copy assignment operator" << std::endl;
    this->type = c.type;
    if (this->br)
        delete this->br;
    this->br = new Brain(*c.br);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << " haw haw\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
    if (this->br)
        delete br;
}