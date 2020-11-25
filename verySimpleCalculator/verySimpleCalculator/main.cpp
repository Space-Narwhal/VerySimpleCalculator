#include <iostream>
#include "Input_Validation_Extended.h"
#include <iomanip>
#include <algorithm>

//***NOTE*** This program's loop is infinite, If you want to close program ctrl-C or stop it. ***NOTE***


int main()
{

    double numOne;
    double numTwo;
    std::string operation;
    double total;


    do
    {
        std::cout << "Number1: ";
        numOne = validateDouble(numOne);

        std::cout << "Number2: ";
        numTwo = validateDouble(numTwo);

        std::cout << "Operation: ";
        operation = validateString(operation);

        std::for_each(operation.begin(), operation.end(), [](char& c) {
            c = ::tolower(c); });

        if (operation.compare("add") == 0 || operation.compare("+") == 0)
        {
            std::cout << "=" << numOne + numTwo << std::endl;
        }
        else if (operation.compare("subtract") == 0 || operation.compare("-") == 0)
        {
            std::cout << std::fixed << std::setprecision(2) << "=" << numOne - numTwo << std::endl;
        }
        else if (operation.compare("multiply") == 0 || operation.compare("*") == 0)
        {
            std::cout << std::fixed << std::setprecision(2) << "=" << numOne * numTwo << std::endl;
        }
        else if (operation.compare("divide") == 0 || operation.compare("/") == 0)
        {
            std::cout << std::fixed << std::setprecision(2) << "=" << numOne / numTwo << std::endl;
        }
        else
        {
            std::cout << "*Operation Not Recognized, Please Try Again!*" << std::endl;
        }

        std::cout << "\n\n";

    } while (true);

}