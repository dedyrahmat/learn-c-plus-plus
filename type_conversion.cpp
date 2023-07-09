#include <iostream>

int main()
{
    /*
        type conversion is conversion as value of one data type to another
        there are 2 ways, Implicit and Explicit
        Impilicit done automatically
        Explicit procede valie with new data type (int)
    */
    // explicit to integer
    double x = (int)3.14;
    // implicit to ascii of D
    char cr = 100;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << '%';
    return 0;
}