// Some applications of a stack data structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<stack> 


bool isBalancedExpression(const std::string& theExpression)
{
	std::stack<char> openSymbolStack; 

	for (int i = 0; i < theExpression.size(); ++i)
	{
		char currentCharacter = theExpression[i]; 
		if (currentCharacter == '(')
		{
			openSymbolStack.push(currentCharacter);
		}

		else if (currentCharacter == ')')
		{
			if (openSymbolStack.empty())
			{
				return false; 
			}

			else
			{
				openSymbolStack.pop(); 
			}
		}

		//else //ASSUMING only parentheses are used as a grouping symbol, 
		//	//this means currentChar is a number or an operation (+, -, ...) 
		//{
		//	//do nothing
		//}
	}

	if (openSymbolStack.empty())
	{
		return true; //AKA: it IS a balanced expression
	}

	else
	{
		return false; //just for now...
	}
}

void demoCheckingForBalancedExpression()
{
	std::string firstUNbalancedExpression = "((5+2)/7))";

	//expect FALSE (NO)
	std::cout << "Is it balanced?\n";

	std::string yesOrNo = isBalancedExpression(firstUNbalancedExpression) ? "yes" : "no";

	std::cout << yesOrNo << "\n";
}

int main()
{

	char maze[13][20] = {
	"###################",
	"#S   #       #   #",
	"### # ### ### # ##",
	"#   #   #   # #  #",
	"# ### ### # # ## #",
	"#     # # # #    #",
	"##### # # # ######",
	"#   # #   #      #",
	"# # # ### ###### #",
	"# #   #       #  #",
	"##### ######### ##",
	"#   #   #     # E#",
	"###################"
	};
}

