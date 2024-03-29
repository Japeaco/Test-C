// test4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//void pointers can point to any data type
//cannot get the value has it has no type
//need to transform void into another data type before use
void increase(void* data, int psize)
{
	if (psize == sizeof(char))
	{
		//initializes data as a char pointer
		char* pchar; pchar = (char*)data; ++(*pchar);
	}
	else if (psize == sizeof(int))
	{
		//initializes data as an int pointer
		int* pint; pint = (int*)data; ++(*pint);
	}
}

int addition(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

//pointers to functions
int operation(int x, int y, int (*functioncall)(int, int)) {
	int a;
	a = (*functioncall)(x, y);
	return a;
}

int main()
{
	int myvar = 25;
	char mychar = 'c';
	double mydoub = 2.34;
	//acts as a pointer to myvar
	//int* declares the variable as a pointer
	//&myvar returns memory address for value of myvar; 
	//memory needed to store value is assigned location in memory
	int* mem = &myvar;
	//variable equals the value pointed to by mem
	int myvar2 = *mem;
	
	cout << "myvar: " << myvar << endl;
	cout << "value of myvar: " << myvar2 << endl;
	cout << "memory address of myvar: " << mem << endl;

	//declaring pointers
	int* number = &myvar;
	char* character = &mychar;
	short* myshort;
	long* mylong;
	double* decimal = &mydoub;

	*number++; //increments pointer; gets value from unincremented address
	*++number; //increments pointer; gets value from incremented address
	++* number; //get value from address; increment value pointed to
	(*number)++; //get value from address; post-increment value pointed to

	cout << "number pointer: " << number << endl;
	cout << "character pointer: " << character << endl;
	cout << "double pointer: " << decimal << endl;

	int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue; //assigned address of firstvalue
	*mypointer = 10; //pointer to address; value in address now 10
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;

	int* p1, * p2;

	p1 = &firstvalue; //assigned address of firstvalue
	p2 = &secondvalue; //assigned address of second value
	*p1 = 10; //value in address of firstvalue = 10
	*p2 = *p1; //value in address of secondvalue = 10
	p1 = p2; //p1 now assigned address of p2 (&secondvalue)
	*p1 = 20; //value in address of secondvalue = 20

	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;

	int numbers[5];
	int* p;

	p = numbers; *p = 10; //pointer now has similar properties to array
	p++; *p = 20; //increment p, references numbers[1]
	p = &numbers[2]; *p = 30; //assigns p to address of value in numbers[2]
	p = numbers + 3; *p = 40; //points to position 4 in array
	p = numbers; *(p + 4) = 50; //points to position 5 in array

	for (int n = 0; n < 5; n++) {
		cout << numbers[n] << ", ";
	}
	cout << endl;

	//can have pointers that reference values, but cannot modify them
	int g = 10;
	int k;
	const int* cp = &g;
	k = *cp; //can read value pointed to by cp, but cannot modify

	int cip;
	int* p01 = &cip; //non-const pointer points to address of non-const int
	const int* p02 = &cip; //non-const pointer points to address of const int
	int* const p03 = &cip; //const pointer points to address of non-const int
	const int* const p04 = &cip; //const pointer points to address of const int

	const char* foo = "hello"; //pointer to first element assigned to foo

	char f = 'x';
	int d = 1602;
	increase(&f, sizeof(f));
	increase(&d, sizeof(d));
	cout << "char: " << f << endl;
	cout << "int: " << d << endl;

	//pointer that points to nowhere
	int* nptr = nullptr;

	int am, sn;

	am = operation(7, 5, addition);
	sn = operation(78, 34, subtraction);

	cout << "addition: " << am << endl;
	cout << "subtraction: " << sn << endl;

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
