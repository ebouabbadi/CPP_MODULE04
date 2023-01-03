#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &c) : Animal(c)
{
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat Copy assignment operator" << std::endl;
    this->type = c.type;
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "miaw miaw\n";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}