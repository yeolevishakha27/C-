#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Parameterized constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Copy constructor
    Person(const Person& other) : name(other.name), age(other.age) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create a Person object
    Person person1("Alice", 30);

    // Use the copy constructor to create a new Person object
    Person person2 = person1;

    // Modify the original object
    person1.display();
    person2.display();

    return 0;
}
