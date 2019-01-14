#pragma once
#include "vectorfunctions.hxx"
//#include <iostream>
//using namespace std;

template <class T>
class Vector {
	public:
		Vector();
		Vector(int initial_size, int initial_value);
		int getSize();
		int getCapacity();
		printVector();
		resize(int newSize);
		insert(int index, T value);
		remove(int index);
		push_back(T value);
		pop_back();
	private:
		int size;
		int capacity = 10; 
		T * arrayPointer = NULL;
};