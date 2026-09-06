
#include <iostream>
using namespace std; 
int main()
{
	int number1, number2, product;
	cout << "this is task 1 \n"; 
	cout << "please enter number 1: ";
	cin >> number1; 
	cout << "please enter number 2 :"; 
	cin >> number2;
	product = number1 * number2; 
	cout<< "the product is " << product<< endl; 

	cout << "this is task 2 \n";
	double basesalary, totalsales, commissionrate, product2, pay;
	cout << "please enter the base salary: ";
	cin >> basesalary; 
	cout << "please enter the total sales: "; 
	cin >> totalsales; 
	cout << "please enter the commission rate: "; 
	cin >> commissionrate;
	product2 = totalsales * commissionrate;
	pay = basesalary + product2;
	cout << "the salespersons pay is: " << pay << endl;

	cout << "this is task 3 \n";
	int width, length, areaft,areainches,tiles,tilesneeded; 
	cout << "please enter the width in feet: ";
	cin >> width; 
	cout << "please enter the length in feet: ";
	cin >> length; 
	areaft = width * length; 
	cout << "the area in feet is: " << areaft << endl;
	areainches = areaft * 144; 
	tiles = 6 * 6;
	tilesneeded = areainches / tiles;
	cout << "you need this number of tiles: " << tilesneeded << endl;

	return 0; 
}
