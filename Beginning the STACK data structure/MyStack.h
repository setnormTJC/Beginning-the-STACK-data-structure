#pragma once


namespace MySpace
{
	class StackAbstractDataType
	{
	protected: //protected gives access to CHILDREN class(es) but NOT to the client program
		virtual void push(const char characterToPushOntoStack) = 0; //an example of a "software design choice"
		virtual void pop() = 0; //no arg. needed
	};
	//template<int capacity>
	class StackImplementedAsArray : public StackAbstractDataType
	{
	private: 
		//let's use a "C-style, static array" to hold the data
		static const int capacity = 5; //this is the MAX number of elements the stack can hold (before "stack overflow")
		char theStackOfData[capacity];// = { 'empty', 'empty' };
		int indexOfTopElement = -1; //why -1? 

	public: 
		void push(const char characterToPushOntoStack) override; //just the function declaration here
		void pop(); 
		char peek(); 
		
	};
}


