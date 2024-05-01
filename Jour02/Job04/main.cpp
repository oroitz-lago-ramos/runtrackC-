#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 2 && (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h"))
    {
        std::cout << "Usage: program_name num1 operator num2\n";
        std::cout << "num1 and num2 are numbers, operator is one of +, -, *, /.\n";
        std::cout << "Example: program_name 5 + 3\n";
    }
    else if (argc != 4)
    {
        std::cout << "Veuillez rentrer une expression type num1 operateur num2";
    }
    else
    {
        float num1 = std::stof(argv[1]);
        std::string op = argv[2];
        float num2 = std::stof(argv[3]);
        float result;
        if (op == "+")
        {
            result = num1 + num2;
        }
        else if (op == "-")
        {
            result = num1 - num2;
        }
        else if (op == "*")
        {
            result = num1 * num2;
        }
        else if (op == "/")
        {
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                std::cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
        }
        else
        {
            std::cout << "Error: Unknown operator '" << op << "'.\n";
            return 1;
        }

        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}