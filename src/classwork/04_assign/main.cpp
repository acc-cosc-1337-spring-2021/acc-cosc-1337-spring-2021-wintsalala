//write includes statements
#include <iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	do 
	{
		cout<<"\nEnter a number between 1 and 10. Enter -1 to exit: ";
		cin>>num;
		if(num == -1) break;
		if(num >= 1 && num <= 10)
		{
			int fact = factorial(num);
			cout<<"\nThe factorial of " << num <<" is " << fact;
		}
		else
		{
			cout<<"Ivalid input. Plese enter a number between 1 and 10.";
		}
	}while (true);
	
	return 0;
}