#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Parammetrs Constructor" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
    *this = c;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c)
{
    std::cout << "WrongAnimal Copy assignment operator" << std::endl;
    this->type = c.type;
    return (*this);
}
std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "no sound\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}