// ProcessArray.h
// class declarations
// Author: Matthew Walker

#include <array>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;

class ProcessArray {
private:
	const static int SIZE = 10;
	int cArray[SIZE];
	array <int, SIZE> cppArray;

	int BinarySearch(int[], int, int);
	int LinearSearchCArray(int[], int, int);
	int LinearSearchCppArray(array<int, SIZE>, int);
	void BubbleSortCArrayDescending(int array[], int elems);
	void SelectionSortCppArray(array<int, SIZE> &);

public:
	void UsingCTypeAlgorithms();
	void UsingCppTypeAlgorithms();
};
