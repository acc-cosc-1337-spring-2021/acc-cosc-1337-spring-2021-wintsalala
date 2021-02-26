//Write the include statement for decisions.h here
#include <string>
#include <iostream>
#include "decision.h"


using std:: string;
using std:: cin;
using std:: cout;

//Write namespace using statements for cout and cin

int main() 
{
	int grade;
	cout << "Enter your grade number: ";
	cin >> grade;
	if (grade >= 0 && grade <= 100)
	{
		cout<<"Your grade(using if/else) is : " << get_letter_grade_using_if(grade);
		cout<<"\nYour grade(using switch) is: " << get_letter_grade_using_switch(grade);
	}
	else
	{
		cout<<"Number out of range";
	}
	
	return 0;
}
