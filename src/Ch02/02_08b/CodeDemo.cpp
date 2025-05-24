// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// in this, texture = 0, sound = 1, etc.
// enum asset_type {texture, sound, animation, script};
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    // this overrides the c-style enum value
    // also the compiler doesn't realize this duality
    int sound = 8;
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
