// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int add_int(float a, double b, long double c){
    int result = 0;
    
    std::cout << "The result is" << static_cast<int>(a) + static_cast<int>(b) + static_cast<int>(c) << std::endl;

    return result;
}

int main(){
    auto score = 8;
    auto points = 12345678901;
    auto height = 6.2f;
    auto duration =90.0;
    auto is_active = true;
    auto initial = 'p';
    auto title = "Soccer Champion";

    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;

    add_int(2.1, 3.9, 4.6);
    std::cout << std::endl << std::endl;
    return 0;
}


