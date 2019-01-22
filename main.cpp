// Lab 13 by Camryn Buonamassa
// Templates and Makefile

#include <iostream>
#include "vectorfunctions.h"
using namespace std;

int main() {

	cout << "Initialize a vector with 10 A's:" << endl;
	Vector<int, 10> vector(10, A);
	vector.printVector();
	cout << endl;
	
	cout << "Insert a Z at index 1:" << endl;
	vector.insert(1, Z);
	vector.printVector();
	cout << endl;
	
	cout << "Remove the element at index 5:" << endl;
	vector.remove(5);
	vector.printVector();
	cout << endl;
	
	cout << "Pop back:" << endl;
	vector.pop_back();
	vector.printVector();
	cout << endl;
	
	cout << "Delete first element." << endl;
	vector.deleteAtIndex(0);
	vector.printVector();
	cout << endl;

	cout << "Resize from 10 to 2:"
	vector.resize(2);
	vector.printVector();
	cout << endl;
}