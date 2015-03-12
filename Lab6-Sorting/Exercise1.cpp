#include <iostream>

using namespace std;

void insertionSort(int data[], signed int size) {
	if (size < 2) return;

	for (int i = 1; i < size; i++) {
		// Store the value on data[i] in temporary variable.
		int temp = data[i];
		// j = counter int.
		int j = i;
		// Iterate through array and move every element bigger than
		// temp value one to the right.
		while (j > 0 && data[j - 1] > temp) {
			data[j] = data[j - 1];
			j--;
		}
		// Put the value we're moving into the right spot.
		data[j] = temp;
	}
}