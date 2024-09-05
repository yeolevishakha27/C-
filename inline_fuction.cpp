
#include <iostream>

// Inline function declaration
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);  // This may be expanded inline by the compiler
    std::cout << "Result: " << result << std::endl;

    return 0;
}
