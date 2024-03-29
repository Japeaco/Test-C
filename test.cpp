// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

//define constant; cannot be changed
const double pi = 3.14159;
const int VAL1 = 25;
const int VAL2 = 100;
const char newline = '\n';

int main()
{
	cout << "Press enter";
	char ch;
	cin.get(ch);
	while (ch != '\n') {
		cin.get(ch);
	}
	//int g;
	//cin >> g;
    //cout << "The number you typed is: " << g; 
	
	int side = 50;
	int area = side * side;

	double r = 5.5;
	double circ = 2 * pi * r;

	int  one, two, three, add;
	one = 500;
	two = 750;
	three = 200;
	add = one + two + three;
	//setw(number) sets width
	cout << setw(10) << "one" << setw(10) << one << endl
		<< setw(10) << "two" << setw(10) << two << endl
		<< setw(10) << "three" << setw(10) << three << endl
		<< setw(10) << "Addition" << setw(10) << add << endl;

	cout << "A square with sides of length " << side << "cm has an area of " << area << "cm" << endl;
	cout << "A circle with radius of " << r << "cm has a circumference of " << circ << "cm" << endl;

	//conditional ternary operator
	int a, b, c;
	a = 2;
	b = 7;
	c = (a > b) ? a : b;

	cout << c << endl;

	if (a > b) {
		cout << "a is greater than b" << endl;
	}
	else {
		cout << "a is less than or equal to b" << endl;
	}

	//sizeof
	int sizea = sizeof(char);
	int sizeb = sizeof(c);
	int sizec = sizeof("hello world");

	cout << sizea << " " << sizeb << " " << sizec << endl;

	array<int,5> arr { 1, 2, 3, 4, 5};
	for (int n = 0; n < arr.size(); n++) {
		cout << arr[n] << endl;
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
