#include <iostream>
using namespace std;

class IAnimal {
    int a;
public:
    virtual void makeSound() const = 0;  // Pure virtual function
    virtual ~IAnimal() {}
};

class IWalker {
public:
    virtual void walk() const = 0;       // Pure virtual function
    virtual ~IWalker() {}
};

class Dog : public IAnimal, public IWalker {   // Multiple inheritance
public:
    void makeSound() const override {          // Implementing IAnimal's pure virtual function
        cout << "Woof!\033[0m" << endl;
    }

    void walk() const override {               // Implementing IWalker’s pure virtual function
        cout << "Dog is walking.\033[0m" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();   // Outputs: Woof!
    myDog.walk();        // Outputs: Dog is walking.
    return 0;
}
