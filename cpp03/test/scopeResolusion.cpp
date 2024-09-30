#include <iostream>
#include <string>

class Human {
public:
Human(const std::string& name) : name(name) {}
void introduce() {
std::cout << "I am a human named " << name << std::endl;}

private:
std::string name;
};

class Person : public Human {
public:
Person(const std::string& name) : Human(name) {}
void greet() {
std::cout << "Hello, I'm a person." << std::endl;}
};

class Employee : public Human {
public:
Employee(const std::string& name) : Human(name) {}
void work() {
std::cout << "I am working as an employee." << std::endl;}
};

// The Manager class inherits from both Person and Employee
class Manager : public Person, public Employee {
public:
Manager(const std::string& name) : Person(name), Employee(name) {}
};

int main() {
Manager manager("Shivani");
manager.Person::introduce(); // Qualify using scope resolution operator
manager.greet(); // Calls greet() from Person
manager.work(); // Calls work() from Employee

return 0;
}