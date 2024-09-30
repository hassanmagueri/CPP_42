#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Public method to display basic information
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

class Employee : public Person {
private:
    std::string position;
    double salary;

public:
    Employee(const std::string& name, int age, const std::string& position, double salary)
        : Person(name, age), position(position), salary(salary) {}

    void display() const {
        Person::display();
        std::cout << "Position: " << position << ", Salary: $" << salary << std::endl;
    }

    std::string getPosition() const {
        return position;
    }

    double getSalary() const {
        return salary;
    }
};
