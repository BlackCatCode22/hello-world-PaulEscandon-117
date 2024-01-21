#include <iostream>
#include <string>

int main()
{
    std::string user_name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, user_name);

    std::cout << "Hello, " << user_name << "! We've been expecting you!" << std::endl;

    return 0;
}
