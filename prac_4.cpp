#include <iostream>
#include <ctime>
/*
    THIS IS A PRACTICE PROGRAM
    ---
    Simple number guessing game
*/

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "------- Number Guessing Game -------" << std::endl;

    do
    {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high" << std::endl;
        }
        else if (guess < num)
        {
            std::cout << "Too low" << std::endl;
        }
        else
        {
            std::cout << "You win! # of tries: " << tries << std::endl;
        }
    } while (guess != num);

    std::cout << "------------------------------------" << std::endl;

    // std::cout << "Hello World C++!" << std::endl;
    return 0;
}