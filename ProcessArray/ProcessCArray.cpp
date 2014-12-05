// ProcessCArray.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include "ProcessArray.h"

bool Greater50(int i) {
	return (i > 50);
}

void ProcessArray::UsingCTypeAlgorithms() {
	
	cout << "*** C TYPE ARRAY ***";
	// display size of array
	int arraySize;
	arraySize = sizeof(cArray) / sizeof(int);
	cout << "\nSize of cArray is: " << arraySize << endl;

	// initialize array with 0's and display
	cout << "cArray initialized to: ";
	for (int i = 0; i <= SIZE; i++) {
		cArray[i] = 0;
		cout << cArray[i] << " ";
	}
	cout << "\n\n";

	// re-initialize in range 0-100 and re-display
	for (auto i = begin(cArray); i != end(cArray); i++) {
		*i = rand() % 101;
		cout << *i << " ";
	}
	
	// use accumulate() and display sum of elements
	cout << "\nSum of elements is: " << accumulate(begin(cArray), end(cArray), 0) << endl;

	// find max and min value
	auto maxValue = max_element(begin(cArray), end(cArray));
	cout << "The max value of cArray is: " << *maxValue << endl;

	auto minValue = min_element(begin(cArray), end(cArray));
	cout << "The min value of cArray is: " << *minValue << endl;

	// use find() to search for specific value
	int * ptr, first{ 85 };
	ptr = find(cArray, cArray + SIZE, first);

	if (ptr < (cArray + SIZE))
		cout << "Value " << first << " was found at index "
				<< (ptr - cArray) << "\n\n";
	else
		cout << first << " not found!\n\n";

	first = { 42 };
	ptr = find(cArray, cArray + SIZE, first);

	if (ptr < (cArray + SIZE))
		cout << "Value " << first << " was found at index "
		<< (ptr - cArray) << "\n\n";
	else
		cout << first << " not found!\n\n";

	// use count() to count for a specific value
	cArray[0] = cArray[1];
	int n = count(cArray, cArray + SIZE, cArray[0]);
	cout << "There are " << n << " values of " << cArray[0] << " found!\n";

	// use countif() to return number of values > 50
	int m = count_if(cArray, cArray + SIZE, Greater50);
	cout << "There are " << m << " values greater than 50 in cArray.\n";

	// use is_sorted()
	bool b = is_sorted(cArray, cArray + SIZE);
	if (b == true)
		cout << "cArray is sorted.\n";
	else
		cout << "cArray is not sorted.\n";

	// use sort()
	sort(cArray, cArray + SIZE);
	cout << "cArray has been sorted!\n";
	for (auto i : cArray)
		cout << i << " ";
	cout << "\n\n";

	// use is_sorted again
	b = is_sorted(cArray, cArray + SIZE);
	if (b == true)
		cout << "cArray is sorted.\n";
	else
		cout << "cArray is not sorted.\n";

	cout << "Reversing the sort: ";
	sort(cArray, cArray + SIZE, greater<int>());
	for (auto i : cArray)
		cout << i << " ";
	cout << "\n\n";

	cout << "Reverse the sort again: ";
	reverse(cArray, cArray + SIZE);
	for (auto i : cArray)
		cout << i << " ";
	cout << "\n\n";

	// use binary_search()
	cout << "Using binary_search()\n";
	int key{ 80 };
	b = binary_search(cArray, cArray + SIZE, key);

	if (b == true)
		cout << "Element " << key << " found.\n";
	else
		cout << "Element " << key << " not found.\n";

	//use BinarySearch()
	key = { 62 };
	int index = BinarySearch(cArray, SIZE, key);
	if (index == -1)
		cout << "Number " << key << " does not exist in cArray.\n";
	else
		cout << "Number " << key << " is found at index " << index << endl;

	// using random shuffle
	cout << "Using random_shuffle\n";
	random_shuffle(cArray, cArray + SIZE);
	for (auto i : cArray)
		cout << i << " ";
	cout << "\n\n";

	// using LinearSearch
	key = { 96 };
	cout << "Using LinearSearch\n";
	int element = LinearSearchCArray(cArray, key, SIZE);

	if (element != -1)
		cout << "Number " << key << " found at index " << element << endl;
	else
		cout << "Number " << key << " not found.\n";

	// using BubbleSort
	BubbleSortCArrayDescending(cArray, SIZE);
	cout << "cArray in descending order: \n";
	for (auto i : cArray)
		cout << i << " ";
	cout << "\n\n";

};

int ProcessArray::BinarySearch(int arr[], int numElem, int value) {
	int first{}, last = numElem - 1, middle, position{ -1 };
	bool found = false;

	while (!found && (first <= last)) {
		middle = (first + last) / 2;
		if (arr[middle] == value) {
			found = true;
			position = middle;
		}
		else if (arr[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}

int ProcessArray::LinearSearchCArray(int arr[], int key, int sizeofArray) {
	for (int j = 0; j < sizeofArray; j++)
		if (arr[j] == key)
			return j;
	return -1;
}

void ProcessArray::BubbleSortCArrayDescending(int arr[], int elems) {
	int temp;
	bool swap;

	do {
		swap = { false };
		for (int count = 0; count < (elems - 1); count++) {
			if (arr[count] < arr[count + 1]) {
				temp = arr[count];
				arr[count] = arr[count + 1];
				arr[count + 1] = temp;
				swap = { true };
			}
		}
	} while (swap);
}
