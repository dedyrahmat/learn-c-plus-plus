#include <iostream>

/*
    THIS IS A PRACTICE PROGRAM
    ---
    Temperature conversion program
    celcius to fahrenheit
*/

int main()
{
    double temp;
    char unit;

    std::cout << "----- Temperature Conversion -----" << std::endl;

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celcius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F" << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C" << std::endl;
    }
    else
    {
        std::cout << "Please only enter in C or F" << std::endl;
    }

    std::cout << "----------------------------------" << std::endl;
    return 0;
}