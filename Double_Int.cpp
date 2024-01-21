#include <iostream>

int main() {
    int user_input;
    std::cout << "Enter an int: ";
    std::cin >> user_input;

    int result = user_input *  2;
    std::cout << "The double of " << user_input << " is " << result << std::endl;

    return 0;
}
