#include <iostream>

int main()
{
    /*
        break = break out of  a loop
        continue = skip current iteration
    */
    for (int i = 1; i <= 20; i++)
    {
        // break
        // if (i == 13)
        // {
        //     break;
        // }

        // continue
        if (i == 13)
        {
            continue;
        }
        std::cout << i << std::endl;
    }

    std::cout << "Hello World C++!" << std::endl;
    return 0;
}