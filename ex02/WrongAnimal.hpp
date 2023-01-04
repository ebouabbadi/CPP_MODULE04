#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &c);
    WrongAnimal &operator=(const WrongAnimal &c);
    std::string getType() const;
    void makeSound() const;
    ~WrongAnimal();
};

#endif