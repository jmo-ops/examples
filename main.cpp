#include <iostream>
#include <stdlib.h>
int main() {
  std::cout << "Hello World!\n";
  char op;
    float num1, num2;

    std::cout << "Enter operator either + or - or * or /: ";
    std::cin >> op;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;
       switch(op)
    {
        case '+':
            std::cout << num1+num2;
            break;

        case '-':
            std::cout << num1-num2;
            break;

        case '*':
            std::cout << num1*num2;
            break;

        case '/':
            std::cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            std::cout << "Error! operator is not correct";
            break;
    }

    return 0;
}