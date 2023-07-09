#include <iostream>

/*
    cout << (insertion operator) or (printing to screen). cout stands for character output
    cin >> (extraction operator operator) or (get user input). cin stands for charater input
*/

int main()
{
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    // std::cin >> name;
    // to get input with spaces. std::ws to eliminate any whitespaces in user input
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old";

    return 0;
}