#pragma once
#include <iostream>

template <class T>
class myvector {
	private:
		int size;
    int capacity;
		T* dynamicArray; //= NULL;
	public:
		myvector();
		myvector(int input_size, T value);
		int getSize();
		int getCapacity();
		void printVector();
		void resize(int newSize);
		void insert(int index, T value);
		void remove(int index);
		void push_back(T value);
		void pop_back();
};
#include "vectorfunctions.cpp"
