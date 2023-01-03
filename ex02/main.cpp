#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    Dog basic;
    {
        Dog tmp = basic;
    }
    delete j; // should not create a leak
    delete i;
    // system("leaks Poly");
    return (0);
}