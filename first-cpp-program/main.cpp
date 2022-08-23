#include <iostream>

int main()
{
    std::string fullName;
    std::cout
        << "Type your fullname "
        << "\n";

    std::getline(std::cin, fullName);

    std::cout << "Name: " << fullName << std::endl;
}
