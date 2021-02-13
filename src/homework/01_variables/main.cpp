//write include statements
#include <iostream>
#include <variables.h>

//write namespace using statement for cout
using std::cin;
using std::cout;
using std::endl;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout <<"Enter the meal amount: ";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout <<"\nEnter the tip rate: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout << "Meal Amount:  " << meal_amount;
	cout << "\nSales Tax:    " << tax_amount;
	cout << "\nTip Amount:   " << tip_amount;
	cout << "\nTotal:        " << total;
	
	return 0;
}
