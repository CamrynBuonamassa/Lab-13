#pragma once
#include "vectorfunctions.cpp"
#include <iostream>

template <class T, int N>
class Vector {
	private:
		int size;
		int capacity = N; 
		T* dynamicArray; //= NULL;
	public:
		Vector();
		Vector(int input_size, T value);
		int getSize();
		int getCapacity();
		printVector();
		resize(int newSize);
		insert(int index, T value);
		remove(int index);
		push_back(T value);
		pop_back();
};