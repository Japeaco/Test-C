// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <iterator>
using namespace std;

//variables referenced with 'myNamespace::a'
//allows use of same name variables without name collision
namespace myNamespace {
	int a, b;
}

//allows variables of any type to be passed to the function
template<class someType, class someOtherType>
someType tempExamp(someType a, someOtherType b) {
	someType result = a + b;
	return result;
}

//the '&' symbol passes the variable itself, not a copy
//this means the variables are changed outside the function after its called
//'const float& total' is more efficient; value not changed, but no copies need be made
//effective if large values need to be passed
int canAfford(float price, float money, float& total, int& quantity) {
	while (total > money) {
		total -= price;
		quantity -= 1;
	}
	return quantity;
}

int multiply(float price, int quantity) {
	return price * quantity;
}

int main()
{
	int quantity;
	float price, total, money;
	string mystr;
	cout << "Enter amount of money you have: " << endl;
	//retrive input as string
	getline(cin, mystr);
	//convert string to int
	stringstream(mystr) >> money;
	cout << "Enter price: " << endl;
	getline(cin, mystr);
	stringstream(mystr) >> price;
	cout << "Enter quantity: " << endl;
	getline(cin, mystr);
	stringstream(mystr) >> quantity;
	//call function
	total = multiply(price, quantity);
	cout << "Total price is £" << total << endl;
	if (money < price) {
		cout << "Cannot afford even one. Get more money, peasant!" << endl;
	}
	else if (total > money && quantity > 1) {
		cout << "You cannot afford this." << endl;
		cout << "Would you like to see how many you can afford? (type 'yes') " << endl;
		getline(cin, mystr);
		if (mystr == "yes") {
			cout << "Calculating... " << endl;
			canAfford(price, money, total, quantity);
			cout << "You can afford " << quantity << " of these items." << endl;
			cout << "Total: " << total << endl;
		}
		
	}
	else {
		cout << "You can afford this. Buy, buy, buy!" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
