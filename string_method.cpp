#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // // .length()
    // if (name.length() > 12)
    // {
    //     std::cout << "Your name can't be over 12 character";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    // // .empty
    // if (name.empty())
    // {
    //     std::cout << "You didn't enter your name";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    // // .clear()
    // name.clear();

    // std::cout << "Hello " << name;

    // // .append(string_to_append)
    // name.append("@gmail.com");

    // std::cout << "Your username is now " << name;

    // .at(index) //return current character of strings at given index
    // std::cout << name.at(1);

    // // .insert() //insert character at given index
    // name.insert(0, "@");
    // std::cout << name;

    // // .find(strings) //return index of the matching character
    // std::cout << name.find(" ");

    // .erase(start_index, end_index); //will delete character from start_index through end_index
    name.erase(0, 3);
    std::cout << name;

    return 0;
}