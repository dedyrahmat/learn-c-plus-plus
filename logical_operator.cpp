#include <iostream>

int main()
{
    /*
        && (AND) = check if two conditions are true
        || (OR) = check if at least one of two conditions is true
        ! (NOT) = reverses the logical state of its operand
    */
    int temp;
    bool sunny = false;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30) // AND
    if (temp <= 0 || temp >= 30) // OR
    {
        std::cout << "The temperature is bad!" << std::endl;
    }
    else
    {
        std::cout << "The temperature is good!" << std::endl;
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside" << std::endl;
    }
    else
    {
        std::cout << "It is sunny outside" << std::endl;
    }

    return 0;
}