// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    // displaying each variable on it's own line
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    // now displaying different expressions on it's own line
    my_flag = true;
    std::cout << "my_flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
