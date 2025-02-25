#include "MyStack.h"
#include <exception>

void MySpace::StackImplementedAsArray::push(const char characterToPushOntoStack)
{
	//filling this in later ...
	if (indexOfTopElement >= capacity - 1)
	{
		throw std::exception("Stack overflow!");
	}

	indexOfTopElement++;  //be wary of off by one errors!

	theStackOfData[indexOfTopElement] = characterToPushOntoStack;
}

void MySpace::StackImplementedAsArray::pop()
{
	indexOfTopElement--; 

	//do we need to "erase" the old top value? 
}

char MySpace::StackImplementedAsArray::peek()
{
	return theStackOfData[indexOfTopElement];
}
