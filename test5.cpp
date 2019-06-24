// test5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//dynamic memory; memory determined during runtime
	//example; when memory needs depend on user input
	
	//allocate memory to contain one element of type int
	//int* foo;
	//allocate block of elements of type int
	//foo = new int[5];
	//foo = new (nothrow) int [5]; null pointer returned if cannot allocate memory

	int i, n;
	int* p;
	cout << "How many numbers would you like to type? ";
	cin >> i;
	p = new (nothrow) int[i];
	if (p == nullptr) {
		cout << "Memory could not be allocated." << endl;
	}
	else {
		for (n = 0; n < i; n++)
		{
			cout << "Enter number: ";
			cin >> p[n];
			cout << p[n] << endl;
		}
		cout << "You have entered: ";
		for (n = 0; n < i; n++) {
			cout << p[n] << ", ";
		}
		//delete array upon its use, which frees up allocated space
		delete[] p;
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
