// test3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string mystr;
square1:
    cout << "You are in square 1, you can go South or East" << endl;
square1retry:
	getline(cin, mystr);
	if (mystr == "south") {
		goto square2;
	}
	else if (mystr == "east") {
		goto square4;
	}
	else {
		cout << "You can only go South or East." << endl;
		goto square1retry;
	}
square2:
	cout << "You are in square 2, you can go South or West" << endl;
square2retry:
	getline(cin, mystr);
	if (mystr == "south") {
		goto square3;
	}
	else if (mystr == "west") {
		goto square1;
	}
	else {
		cout << "You can only go South or West" << endl;
		goto square2retry;
	}
square3:
	cout << "You are in square 3, you can go North or West" << endl;
square3retry:
	getline(cin, mystr);
	if (mystr == "north") {
		goto square2;
	}
	else if (mystr == "west") {
		goto square4;
	}
	else {
		cout << "You can only go North or West" << endl;
		goto square3retry;
	}
square4:
	cout << "You are in square 4, you can go North or South" << endl;
square4retry:
	getline(cin, mystr);
	if (mystr == "north") {
		goto square1;
	}
	else if (mystr == "south") {
		goto square3;
	}
	else {
		cout << "You can only go North or South" << endl;
		goto square4retry;
	}
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
