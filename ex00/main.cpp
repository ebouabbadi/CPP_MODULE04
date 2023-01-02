#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return 0;
}

// class father // abstract class
// {
// public:
//     virtual void affich() = 0;// pure faction
// };// ma33ndakx l7a9 declari taxi obji

// class son : public father
// {
// public:
//     void affich()
//     {
//         std::cout << "son\n";
//     }
// };

// class girl : public father
// {
// public:
//     void affich()
//     {
//         std::cout << "girl\n";
//     }
// };
// int main()
// {
//     father *oj = new father;
//     // oj.affich();
//     father *p = new son;
//     // son *p = new son;
//     p->affich();
//     p = new girl;
//     p->affich();
// }