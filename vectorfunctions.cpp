template <class T> //creates an array of size and type determined at compile time
myvector<T>::myvector() {
	size = 0;
    capacity = 10;
	dynamicArray = new T[capacity];
}

template <class T> //creates an array of N capacity and type T
myvector<T>::myvector(int input_size, T value) {
    capacity = 10;
	dynamicArray = new T[capacity];
	
	if(input_size > capacity) { //checks if input size is greater than N
		resize(input_size); 
	}
	
	size = input_size;
	for(int i = 0; i < size; i++) { //initializes every vector index to the given value of any type
		dynamicArray[i] = value;
	}
}

template <class T>
int myvector<T>::getSize() {
	return size;
}

template <class T>
int myvector<T>::getCapacity() {
	return capacity;
}

template <class T> // print all items in vector separated by spaces
void myvector<T>::printVector() {
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;
}

template <class T> 
void myvector<T>::resize(int newSize) {
	capacity = newSize; //make capacity new size
	T* newDynamicArray;
	newDynamicArray = new T[capacity]; //new dynamic array
	
	for(int i = 0; i < size; i++) { //go up to size bc if new array is bigger, don't want junk in empty spots
		newDynamicArray[i] = dynamicArray[i]; //assign all old elements to new array
	}
	
	dynamicArray = newDynamicArray; //dynamicArray points to the new array
	delete[] newDynamicArray; //delete the space for newDynamicArray, it was an intermediate variable
}

template <class T>
void myvector<T>::insert(int index, T value) {
	size += 1;	
	if(size > capacity) {
		resize(size);
	}
	T* newDynamicArray;
	newDynamicArray = new T[size];
	bool done = false;
	for(int i = 0; i < size; i++) {
		if(i == index && !(done)) {
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
	dynamicArray = newDynamicArray; //dynamicArray points to the new array
    delete[] newDynamicArray; //delete the space for newDynamicArray, it was an intermediate variable
}

template <class T>
void myvector<T>::remove(int index) {
	T* newDynamicArray;
	newDynamicArray = new T[size-1];
	bool removed = false;
	for(int i = 0; i < size; i++) {
		if(i == index && !(removed)) {
	 		newDynamicArray[i] = dynamicArray[i+1];
	 		removed = true;
	 	}
		else if(removed) {
	 		newDynamicArray[i] = dynamicArray[i+1];
	 		/* if we have removed the item at the specified
	 		index, every other element will be shifted back */
	 	}
	 	else {
	 		newDynamicArray[i] = dynamicArray[i];
	 		/* if we haven't removed anything, every element
	 		remains in the same index */
	 	}	
	}
	dynamicArray = newDynamicArray; //dynamicArray points to the new array
    delete[] newDynamicArray; //delete the space for newDynamicArray, it was an intermediate variable
}

template <class T>
void myvector<T>::push_back(T value) { //adds an element to the end of the vector
	size += 1;
	if(size > capacity){
		resize(size);
	}
	int i = size - 1;
	dynamicArray[i] = value;
}

template <class T>
void myvector<T>::pop_back() { //removes the last element of the vector, decreasing size by 1
	int i = size - 1;
	remove(i);	
}
