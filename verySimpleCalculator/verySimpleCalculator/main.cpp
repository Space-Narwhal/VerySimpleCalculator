#include <iostream>
#include "Input_Validation_Extended.h"
#include <iomanip>
#include <algorithm>
#include <string>


void printWelcome()
{
    std::cout << "=============================================" << std::endl;
    std::cout << "You are able to do the following calculations" << std::endl;
    std::cout << "      Add, Subtract, Multiply, Divide        " << std::endl;
    std::cout << " If you want to end the program, type 'end'. " << std::endl;
    std::cout << " when it prompts you to enter the operation " << std::endl;
    std::cout << "=============================================" << std::endl;
}

bool calculateResult(double numOne, double numTwo, std::string operation)

{
    if (operation.compare("add") == 0 || operation.compare("+") == 0)
    {
        std::cout << "Result: " << numOne + numTwo << std::endl;
        return true;
    }
    else if (operation.compare("subtract") == 0 || operation.compare("-") == 0)
    {
        std::cout << "Result: " << numOne - numTwo << std::endl;
        return true;

    }
    else if (operation.compare("multiply") == 0 || operation.compare("*") == 0)
    {
        std::cout << "Result: " << numOne * numTwo << std::endl;
        return true;


    }
    else if (operation.compare("divide") == 0 || operation.compare("/") == 0)
    {
        std::cout << std::fixed << std::setprecision(2) << "=" << numOne / numTwo << std::endl;
        return true;
    }
    else if (operation.compare("end") == 0)
    {
        return false;
    }
    else
    {
        std::cout << "*Operation Not Recognized, Please Try Again!*" << std::endl;
        return true;
    }
}

int main()
{

    double numOne;
    double numTwo;
    std::string operation;
    double total;
    bool whileLoopStopper = true;


    do
    {
        printWelcome();
        std::cout << "Number1: ";
        numOne = validateDouble(numOne);

        std::cout << "Number2: ";
        numTwo = validateDouble(numTwo);

        std::cout << "Operation: ";
        operation = validateString(operation);

        std::for_each(operation.begin(), operation.end(), [](char& c) {c = ::tolower(c); });

        whileLoopStopper = calculateResult(numOne, numTwo, operation);
        std::cout << "\n\nyepfj";


    } while (whileLoopStopper);

}