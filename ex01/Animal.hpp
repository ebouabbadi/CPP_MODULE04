#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &c);
    Animal &operator=(const Animal &c);
    std::string getType()const;
    virtual void    makeSound()const;
    virtual ~Animal();
};

#endif