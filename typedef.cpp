#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // usually ends with _t for the name of typedef
// typedef std::string str_t;
// typedef int number_t;
using str_t = std::string;
using number_t = int;

int main()
{
    /*
        typedef reserved keyword used to create an additional name
        (alias) for another data type.
        New identifier for an existing type
        Helps with readability and reduces typos
        Use when there is a clear benefit
        Replaced with 'using' (work better with templates)
    */
    str_t name = "My name is Dera";
    number_t age = 24;
    std::cout << name << age << std::endl;

    return 0;
}