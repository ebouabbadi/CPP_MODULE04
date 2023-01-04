#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor" << std::endl;
    br = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat &c) : Animal(c)
{
    this->br = nullptr;
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat Copy assignment operator" << std::endl;
    this->type = c.type;
    if (this->br)
        delete this->br;
    this->br = new Brain(*c.br);
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "miaw miaw\n";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
    if (this->br)
        delete br;
}
