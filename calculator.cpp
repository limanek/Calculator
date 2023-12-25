#include <iostream>
#include <string>




std::string enter_number() {
    std::string text;
    std::cout << "number format e.g.: x + y" << std::endl;
    std::getline(std::cin,text);
    return text;
}

std::string start() {
    std::string text = enter_number();
    std::cout << text;
}

int main() {
    start();
}
