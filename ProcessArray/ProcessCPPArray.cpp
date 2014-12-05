// ProcessCPPArray.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include "ProcessArray.h"

bool Greater60(int i) {
	return (i > 60);
}

void ProcessArray::UsingCppTypeAlgorithms() {

	cout << "*** C++ TYPE ARRAY ***";
	// display size of cppArray
	cout << "\nSize of cppArray is: " << cppArray.size() << endl;

	// initialize to 0 and display
	cout << "cppArray initialized to: ";
	for (auto &i : cppArray) {
		i = 0;
		cout << i << " ";
	}
	cout << "\n\n";

	// re-initialize in range 0-100 and re-display
	for (auto i = cppArray.begin(); i != cppArray.end(); i++) {
		*i = rand() % 100;
		cout << *i << " ";
	}

	// use accumulate() and display sum of elements
	cout << "\nSum of elements is: " << accumulate(begin(cppArray), end(cppArray), 0) << endl;

	// find max and min value
	auto maxValue = max_element(cppArray.begin(), cppArray.end());
	cout << "The max value of cppArray is: " << *maxValue << endl;

	auto minValue = min_element(cppArray.begin(), cppArray.end());
	cout << "The min value of cppArray is: " << *minValue << endl;

	// use find() to search for specific value
	int first{ 18 };

	auto ptr = find(cppArray.begin(), cppArray.end(), first);

	if (ptr < cppArray.end())
		cout << "Value " << first << " was found at index "
		<< (ptr - cppArray.begin()) << "\n\n";
	else
		cout << first << " not found!\n\n";

	first = { 42 };
	ptr = find(cppArray.begin(), cppArray.end(), first);

	if (ptr < cppArray.end())
		cout << "Value " << first << " was found at index "
		<< (ptr - cppArray.begin()) << "\n\n";
	else
		cout << first << " not found!\n\n";

	// use count() to count for a specific value
	cppArray[0] = cppArray[1];
	int n = count(cppArray.begin(), cppArray.end(), cppArray[0]);
	cout << "There are " << n << " values of " << cppArray[0] << " found!\n\n";

	// use countif() to return number of values > 60
	int m = count_if(cppArray.begin(), cppArray.end(), Greater60);
	cout << "There are " << m << " values greater than 60 in cppArray.\n";

	// use is_sorted()
	bool b = is_sorted(begin(cppArray), end(cppArray));
	if (b == true)
		cout << "cppArray is sorted.\n";
	else
		cout << "cppArray is not sorted.\n"; 

	// use sort()
	sort(cppArray.begin(), cppArray.end());
	cout << "cppArray has been sorted!\n";
	for (auto i : cppArray)
		cout << i << " ";
	cout << "\n\n";

	// use is_sorted again
	b = is_sorted(begin(cppArray), end(cppArray));
	if (b == true)
		cout << "cppArray is sorted.\n";
	else
		cout << "cppArray is not sorted.\n";

	cout << "Reversing the sort: ";
	sort(cppArray.begin(), cppArray.end(), greater<int>());
	for (auto i : cppArray)
		cout << i << " ";
	cout << "\n\n";
	
	cout << "Reverse the sort again: ";
	reverse(cppArray.begin(), cppArray.end());
	for (auto i : cppArray)
		cout << i << " ";
	cout << "\n\n";
	
	// use binary_search()
	cout << "Using binary_search()\n";
	int key{ 53 };
	b = binary_search(cppArray.begin(), cppArray.end(), key);

	if (b == true)
		cout << "Element " << key << " found.\n";
	else
		cout << "Element " << key << " not found.\n";

	// using random shuffle
	cout << "Using random_shuffle\n";
	random_shuffle(cppArray.begin(), cppArray.end());
	for (auto i : cppArray)
		cout << i << " ";
	cout << "\n\n";

	// using LinearSearch
	key = { 34 };
	int element = LinearSearchCppArray(cppArray, key);

	if (element != -1)
		cout << "Number " << key << " found at index " << element << endl;
	else
		cout << "Number " << key << " not found.\n";

	// using SelectionSort to reverse order
	SelectionSortCppArray(cppArray);
	cout << "cppArray in descending order: \n";
	for (auto i : cppArray)
		cout << i << " ";
	cout << "\n\n";

};

int ProcessArray::LinearSearchCppArray(array<int, SIZE>arr, int key) {
	for (int j : arr)
		if (j == key)
			return j;
	return -1;
}

void ProcessArray::SelectionSortCppArray(array<int, SIZE> &arr) {
	int highest;

	for (size_t i = 0; i < SIZE - 1; i++) {
		highest = i;

		for (size_t j = i + 1; j < SIZE; j++)
			if (arr[j] > arr[highest])
				highest = j;
		// swap
		int temp;
		temp = arr[highest];
		arr[highest] = arr[i];
		arr[i] = temp;
	}
}
