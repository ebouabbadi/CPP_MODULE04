#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    std::cout << "Cat Parammetrs Constructor called" << std::endl;
    this->type = type;
}

Cat::Cat(const Cat &c) : Animal(c)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = c.type;
    return *this;
}
void Cat::makeSound()const{
    std::cout << "miaw miaw\n";
    }

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}