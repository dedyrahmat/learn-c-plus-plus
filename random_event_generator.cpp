#include <iostream>
#include <ctime>

int main()
{
    /*
        pseudo-random = NOT truly random (but close)
    */
    srand(time(0)); // use current time as seed

    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumber sticker!" << std::endl;
        break;
    case 2:
        std::cout << "You win a t-shirt!" << std::endl;
        break;
    case 3:
        std::cout << "You win a free lunch!" << std::endl;
        break;
    case 4:
        std::cout << "You win a gift card!" << std::endl;
        break;
    case 5:
        std::cout << "You win a concert ticket" << std::endl;
        break;

    default:
        break;
    }
    // std::cout << num << std::endl;

    return 0;
}