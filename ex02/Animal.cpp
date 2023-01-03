#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Parametrized Constructor" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &c)
{
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = c;
}

Animal &Animal::operator=(const Animal &c)
{
    std::cout << "Animal Copy assignment operator" << std::endl;
    this->type = c.type;
    return *this;
}
std::string Animal::getType() const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}