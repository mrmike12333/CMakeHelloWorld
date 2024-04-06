#include <iostream>

int main()
{
    // Some arbitrary C++14 code to test make requirement
    auto myInt = std::make_unique<int>(5);

    for (int i = 0; i < *myInt; ++i)
        std::cout << "Hello, World!" << std::endl;

    return 0;
}