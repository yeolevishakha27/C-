#include <iostream>

class MyClass {
public:
    // Data members (attributes)
    int myInt;

    // Member function
    void display() {
        std::cout << "The value of myInt is: " << myInt << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Access and modify the data member
    obj.myInt = 42;

    // Call the member function
    obj.display();

    return 0;
}

    