#include <iostream>

class Parent {
protected:
    int attr1;
    int attr2;

public:
    Parent() : attr1(0), attr2(0) {}
    void printAttributes() const {
        std::cout << "attr1: " << attr1 << ", attr2: " << attr2 << std::endl;
    }
};

class Child1 : virtual public Parent {
public:
    Child1() {
        attr1 = 10;
        attr2 = 30;
    }
    int getattr1() { return attr1; }
};

class Child2 : virtual public Parent {
public:
    Child2() {
        attr1 = 20;
        attr2 = 40;
    }
};

class GrandChild : public Child1, public Child2 {
public:
    GrandChild() {
        // Explicitly choose which attributes to keep
        attr1 = Child1::attr1;
        attr2 = Child2::attr2;
    }
};

int main() {
    std::cout << "Child1 attributes:" << std::endl;
    Child1 c1;
    c1.printAttributes();

    std::cout << "\nChild2 attributes:" << std::endl;
    Child2 c2;
    c2.printAttributes();

    std::cout << "\nGrandChild attributes:" << std::endl;
    GrandChild gc;
    gc.printAttributes();

    return 0;
}