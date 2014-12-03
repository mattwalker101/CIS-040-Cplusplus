// ProcessCPPArray.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include "ProcessArray.h"

bool Greater60(int i) {
	return (i > 60);
}

void ProcessArray::UsingCppTypeAlgorithms() {
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
	for (auto i = cppArray.begin(); i != cppArray.end; i++) {
		*i = rand() % 100;
		cout << *i << " ";
	}

	// use accumulate() and display sum of elements
	cout << "\nSum of elements is: " << accumulate(cppArray.begin(), cppArray.end());

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
	auto ptr = find(cppArray.begin(), cppArray.end(), first);

	if (ptr < cppArray.end())
		cout << "Value " << first << " was found at index "
		<< (ptr - cppArray.begin()) << "\n\n";
	else
		cout << first << " not found!\n\n";

	// use count() to count for a specific value
	cppArray[0] = cppArray[1];
	int n = count(cppArray.begin(), cppArray.end(), cppArray[0]);
	cout << "There are " << n << " values of " << cppArray[0] << " found!\n\n";

	//
	bool b = is_sorted(begin(cppArray), end(cppArray));

};

int ProcessArray::LinearSearchCppArray(array<int, SIZE>arr, key) {
	for (int j : arr)
		if (j == key)
			return j;
	return -1;
}

void ProcessArray::SelectionSortCppArray(array<int, SIZE> &)
