#include <iostream>
#include <string>

std::string enter_number() {
    std::string text;
    std::cout << "number format e.g.: 'x + y'" << std::endl;
    std::cout << "allowed operations: +/-/*//" << std::endl;
    std::getline(std::cin,text);
    return text;
}

int sign_fun(std::string sign) {
    std::string sign_re = sign;
    if(sign_re == "+") {
        return 1;
    } else if(sign_re == "-") {
        return 2;
    } else if(sign_re == "*") {
        return 3;
    } else if (sign_re == "/") {
        return 4;
    }
}

int simple_algorithms(int x, std::string sign, int y) {
    int x_re = x;
    int y_re = y;
    switch (sign_fun(sign))
    {
    case 1:
        std::cout << x_re + y_re;
        break;
    case 2:
        std::cout << x_re - y_re;
        break;
    case 3:
        std::cout << x_re * y_re;
        break;
    case 4:
        if(y_re == 0) {
            std::cout << "cannot be divided by zero" << std::endl;
        } else {
            std::cout << x_re / y_re;
        }
        break;
    return 0;
    }
}

int converter(std::string x, std::string sign, std::string y) {
    
    int x_con = std::stoi(x);
    std::cout << "x =" << x_con << ":" << std::endl;

    std::string sign_con = sign;
    std::cout << "sign =" << sign_con << ":" << std::endl;

    int y_con = std::stoi(y);
    std::cout << "y =" << y_con << ":" << std::endl;

    simple_algorithms(x_con, sign_con, y_con);
    return 0;
}

std::string separation(std::string text) {
    std::string text_con = text;

    std::string x = text_con.substr(0, 1);
    std::cout << "x =" << x << ":" << std::endl;

    std::string sign = text_con.substr(2, 1);
    std::cout << "sign =" << sign << ":" << std::endl;

    std::string y = text_con.substr(4, 4);
    std::cout << "y =" << y << ":" << std::endl;

    converter(x,sign,y);
    return 0;
}

int start() {
    std::string text = enter_number();
    separation(text);
    return 0;
}

int main() {
    start();
    return 0;
}
