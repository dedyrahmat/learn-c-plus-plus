#include <iostream>

namespace first
{
    int x = 0;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;
    // using namespace std;
    using std::cout;
    using std::endl;
    // using std::string;
    /*
        namespace provides a solution for preventing name conflicts
        in large projects. Each entity needs a unique name.
        A namespace allows for identically named entities
        as long as the namespaces are different.
    */
    int x = 1;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;
    return 0;
}