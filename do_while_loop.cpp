#include <iostream>
#include <string> //to resolve "namespace 'std' has no member 'getline'" error

int main()
{
    /*
        do while loop = do some block of code first,
                        THEN repeat again if the conditions is TRUE
    */
    int number;

    do
    {
        std::cout << "Enter the positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;

    return 0;
}