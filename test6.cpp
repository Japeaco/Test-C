// test6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct movies {
	string title;
	int year;
};

struct friends {
	string email;
	string name;
	movies favouritemovie;
};

void printmovie(movies movies) {
	cout << movies.title << " (" << movies.year << ") " << endl;
}

int main()
{
	struct product {
		int weight;
		double price;
	};

	int n;
	product apple, banana, melon;
	movies films[3];
	movies film;
	//pointer of data type movies
	movies* filmsp;
	//assigns memory address of film
	filmsp = &film;

	apple.weight = 0.5;
	apple.price = 0.1;
	
	films[0].title = "Blade Runner";
	films[0].year = 1982;
	films[1].title = "The Matrix";
	films[1].year = 1999;
	films[2].title = "Taxi Driver";
	films[2].year = 1976;

	//-> dereference operator points to members of objects
	filmsp->title = "Invasion of the body snatchers";
	filmsp->year = 1978;

	for (int n = 0; n < 3; n++) {
		printmovie(films[n]);
	}
	cout << filmsp->title << " (" << filmsp->year << ") " << endl;

	friends adam;

	//nested structures
	adam.name = "Adam";
	adam.email = "adam@gmail.com";
	adam.favouritemovie.title = "Terminator";
	adam.favouritemovie.year = 1984;

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
