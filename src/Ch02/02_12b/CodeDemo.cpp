// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo> // allows for us to use 'typeid'

int main(){
    auto score = 8;
    auto points = 12345678901;
    auto height = 6.2f;
    auto duration = 90.0;
    auto is_active = true;
    auto initial = 'p';
    auto title = "Soccer Champions";

    std::cout << "The type of score is " << typeid(score).name() << std::endl; // i for int
    std::cout << "The type of points is " << typeid(points).name() << std::endl; // l for long
    std::cout << "The type of height is " << typeid(height).name() << std::endl; // f for float
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl; // d for double
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl; // b for bool
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl; // c for char
    std::cout << "The type of title is " << typeid(title).name() << std::endl; // PKc for Pointer to Const Char (aka string)

    std::cout << std::endl << std::endl;
    return 0;
}
