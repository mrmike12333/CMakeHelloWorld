#include <iostream>
#include "HelloWorldConfig.h"

/**
 * @brief Output CMAKE config information to the console.
 * 
 */
void drawProjectHeader()
{
    std::cout << "======" << std::endl;
    std::cout << "Project Name: " 
         << PROJECT_NAME << std::endl;
    std::cout << "Description: " 
         << PROJECT_DESCRIPTION << std::endl;
    std::cout << "Version: " << VERSION_MAJOR << 
    "." << VERSION_MINOR << std::endl;
    std::cout << "======" << std::endl;
}

int main()
{
    drawProjectHeader();

    // Some arbitrary C++14 code to test make requirement
    auto myInt = std::make_unique<int>(5);

    for (int i = 0; i < *myInt; ++i)
        std::cout << "Hello, World!" << std::endl;

    return 0;
}