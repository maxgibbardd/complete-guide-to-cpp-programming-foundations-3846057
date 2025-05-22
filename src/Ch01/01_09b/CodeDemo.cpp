// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi There!" << std::endl;

    // start of my code
    std::string name;

    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Your name is " << name << "!" << std::endl;
    // end of my code

    std::cout << std::endl << std::endl;
    return 0;
}