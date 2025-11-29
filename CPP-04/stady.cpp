#include <iostream>

#include <iostream>

#include <iostream>
#include <string>

#include <iostream>
#include <string>

class Brain {
public:
    std::string ideas[5]; // for simplicity

    Brain() {
        for (int i = 0; i < 5; i++)
            ideas[i] = "Idea " + std::to_string(i+1);
        std::cout << "Brain created\n";
    }

    Brain(const Brain &other) {
        for (int i = 0; i < 5; i++)
            ideas[i] = other.ideas[i];
        std::cout << "Brain copied (deep copy)\n";
    }

    ~Brain() { std::cout << "Brain destroyed\n"; }
};

class Animal {
public:
    std::string type;

    Animal(const std::string &t = "Animal") : type(t) {}
    virtual ~Animal() { std::cout << type << " destroyed\n"; }
    virtual void speak() { std::cout << type << " sound\n"; }
};

class Dog : public Animal {
public:
    Brain *brain;

    Dog() : Animal("Dog") {
        brain = new Brain();
        std::cout << "Dog created\n";
    }

    // Deep copy constructor
    Dog(const Dog &other) : Animal(other) {
        brain = new Brain(*other.brain);
        std::cout << "Dog copy constructor called\n";
    }

    // Deep copy assignment operator
    Dog &operator=(const Dog &other) {
        if (this != &other) {
            delete brain;                // delete old brain
            brain = new Brain(*other.brain); // deep copy
            this->type = other.type;
        }
        std::cout << "Dog copy assignment called\n";
        return *this;
    }

    ~Dog() {
        delete brain;
        std::cout << "Dog destroyed\n";
    }
};




int main() {
    Animal *a = new Dog();   // إنشاء Dog
    delete a;                // مسح الذاكرة
    Animal *b = a;           // b = pointer منسوخ من a (shallow copy)

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    // تجربة استعمال b (ممنوع!) كيدير crash
    // std::cout << typeid(*b).name();

    std::cout << typeid(*b).name();

    return 0;
}
