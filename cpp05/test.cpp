#include <iostream>

class Animal {
public:
    virtual void speak() = 0; // pure virtual function
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* a = new Animal();

    // a->speak(); // Outputs: Woof!
    delete a;
}
