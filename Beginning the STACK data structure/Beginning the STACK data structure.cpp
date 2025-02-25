// Beginning the STACK data structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"MyStack.h"

#include <iostream>
#include<stack> 

struct Plate
{
    int diameter;
    std::string plateBrand;
};

int main()
{
    //std::stack<Plate> stackOPlates; 

    //MySpace::StackAbstractDataType attemptAtObjectCreation;  //not allowed!

    MySpace::StackImplementedAsArray stackOfCharacters; // ex: '{', 'a', '.'

    try
    {
        stackOfCharacters.push('a');
        stackOfCharacters.push('b');
        stackOfCharacters.push('c');
        stackOfCharacters.push('d');
        stackOfCharacters.push('e');
        stackOfCharacters.push('f');
    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }

    //stackOPlates.
    //std::cout << "Hello World!\n";
}
