#include <iostream>
#include <string>
#include <vector>
#include <sstream>

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
    return 0;
}

int simple_algorithms(int x, std::string sign, int y) {
    int x_re = x;
    int y_re = y;
    switch (sign_fun(sign))
    {
    case 1:
        std::cout << "=" << x_re + y_re;
        break;
    case 2:
        std::cout << "=" << x_re - y_re;
        break;
    case 3:
        std::cout << "=" << x_re * y_re;
        break;
    case 4:
        if(y_re == 0) {
            std::cout << "cannot be divided by zero" << std::endl;
        } else {
            std::cout << "=" << x_re / y_re;
        }
        break;
    }
    return 0;
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

    struct Expression {
    std::string x;
    std::string sign;
    std::string y;
    };

    std::string input = text;
    std::istringstream iss(input);
    std::vector<Expression> expressions;

    Expression exp;
    while (iss >> exp.x >> exp.sign >> exp.y) {
        expressions.push_back(exp);
    }

    converter(exp.x, exp.sign, exp.y);
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
