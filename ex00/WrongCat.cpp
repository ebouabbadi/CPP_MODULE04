#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c)
{
    std::cout << "WrongCat Copy Constructor" << std::endl;
    *this = c;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
    std::cout << "WrongCat Copy assignment operator" << std::endl;
    this->type = c.type;
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << "miaw miaw\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}