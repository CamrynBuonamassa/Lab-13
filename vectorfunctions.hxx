//template <class T>
Vector<T>::Vector() {
	size = 0;
	dynamicArray = new T[capacity];	
}

//template <class T>
Vector<T>::Vector(int initial_size, int initial_value) {
	dynamicArray = new T[capacity];
	
	if(initial_size > capacity) {
		resize(initial_size);
	}
	
	size = initial_size;
	for(int i = 0; i < initial_size; i++) {
		dynamicArray[i] = initial_value;
	}
}

//template <class T>
int Vector<T>::getSize() {
	return size;
}

//template <class T>
int Vector<T>::getCapacity() {
	return capacity;
}

//template <class T> //do I need void before this and all the others after?
void Vector<T>::printVector() {
    for (int i = 0; i < size; i++) {
      cout << arrayPointer[i] << " "; // HOW DOES THIS POINTER WORK?
    }
    cout << endl;
}

//template <class T> // should it really be newSize or newCapacity?
Vector<T>::resize(int newSize) {
	capacity = newSize;
	T* newDynamicArray = new T[capacity];
	
	for(int i = 0; i < size; i++) {
		newDynamicArray[i] = dynamicArray[i];
	}
	
	delete[] dynamicArray;
	dynamicArray = newDynamicArray;
}

//template <class T>
Vector<T>::insert(int index, T value) {
	size += 1;	
	if(size > capacity) {
		resize(size);
	}

	T* newDynamicArray = new T[size];
	bool done = false;
	for(int i = 0; i < size; i++) {
		if(i == index) {
			newDynamicArray[i] = value;
			done = true;
		}
		else if(done) {
			newDynamicArray[i] = dynamicArray[i-1]; 
			/* once value is inserted, fill new array with the 
			rest of the original values which will be 1 index
			to the left in the old array */
		}
		else {
			newDynamicArray[i] = dynamicArray[i];
			/* if nothing has been inserted, then
			continue to fill new array with old array */
		}
	}
  delete[] dynamicArray;
  dynamicArray = newArr;
}

//template <class T>
Vector<T>::remove(int index) {
	bool removed = false;
	int i = 0;
	 if(i == index) {
	 	dynamicArray[i] = dynamicArray[i+1];
	 	removed = true;
	 }
	 else if(removed) {
	 	dynamicArray[i] = dynamicArray[i+1];
	 	/* if we have removed the item at the specified
	 	index, every other element will be shifted back */
	 }
	 else {
	 	dynamicArray[i] = dynamicArray[i];
	 	/* if we haven't removed anything, every element
	 	remains in the same index */
	 }
	 size -= 1; //must do this at the end so we don't lose the last element
}

//template <class T>
Vector<T>::push_back(T value) { //adds an element to the end of the vector
	size += 1;
	if(size > capacity){
		resize(size);
	}
	int i == size - 1;
	dynamicArray[i] = value;
}

//template <class T>
Vector<T>::pop_back() { //removes the last element of the vector, decreasing size(or capacity?) by 1
	int i == size - 1;
	remove(i);	
}
