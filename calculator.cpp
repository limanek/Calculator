#include <iostream>
#include <string>

std::string enter_number() {
    std::string text;
    std::cout << 'number format e.g.:"x + y"' << std::endl;
    std::getline(std::cin,text);
    return text;
}

int separation(std::string text) {
    std::string text = text;
    std::string x = text.erase(0, 1);
    std::string sign = text.erase(2, 3);
    std::string y = text.erase(3, 4);
    std::cout << x << " " << sign << " " << y << std::endl;
}

int start() {
    std::string text = enter_number();
    std::string separation(text);
}

int main() {
    start();
}
