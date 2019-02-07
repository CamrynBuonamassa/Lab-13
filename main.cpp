// Lab 13 by Camryn Buonamassa
// Templates and Makefile

#include <iostream>
#include "vectorfunctions.h"
using namespace std;
int main() {

    std::cout << "Initialize a vector with 10 a's:" << std::endl;
    
    myvector<char> myvector(10, 'a');
	myvector.printVector();
    cout << endl;
	
	cout << "Insert a Z at index 1:" << endl;
	myvector.insert(1, 'Z');
	myvector.printVector();
	cout << endl;
	
	cout << "Remove the element at index 5:" << endl;
	myvector.remove(5);
	myvector.printVector();
	cout << endl;
	
	cout << "Pop back:" << endl;
	myvector.pop_back();
	myvector.printVector();
	cout << endl;
	
	cout << "Delete first element." << endl;
	myvector.remove(0);
	myvector.printVector();
	cout << endl;

    cout << "Resize from 10 to 2:" << endl;
	myvector.resize(2);
	myvector.printVector();
	cout << endl;
}
