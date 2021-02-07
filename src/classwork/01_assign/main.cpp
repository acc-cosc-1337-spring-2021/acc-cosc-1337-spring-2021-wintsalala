//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

using std:: cin;
using std:: cout;
using std:: endl;

int main() 
{
	int num;
	cin >> num;
	int result = multiply_numbers(num);
	cout << result << endl;
	int num1 = 4;
	result = multiply_numbers(num1);
	cout << result << endl;
	return 0;
}

