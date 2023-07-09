#include <iostream>

int main()
{
    /*
        arithmetic operators = return the result of specific
        arithmetic operation (+ - / *)
    */
    int students = 20;

    // addition
    //  students = students + 1;
    //  students += 3;
    //  students++;

    // subtraction
    //  students = students - 1;
    //  students -= 3;
    // students--;

    // multiplication
    //  students = students * 3;
    // students *= 3;

    // division
    //  students = students / 3;
    // students /= 3;

    // modulus -- return the remain number after division
    int remainder = students % 3;

    std::cout << students << std::endl;
    std::cout << remainder << std::endl;
    return 0;
}