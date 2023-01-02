#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(const Dog &c);
    Dog &operator=(const Dog &c);
    ~Dog();
};

#endif