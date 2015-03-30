#pragma once

#include "insertionsort.h"

template<class T>
void quicksort2(T data[], int first, int last, unsigned int bc) {
	if (last-first  bc) {
		// DEBUG
		cout << "Starting insertionsort. Current array: " << endl;
		for (int i = 0; i < 100; i++) {
			cout << data[i] << "-";
		}
		cout << endl << endl;
		// END
		insertionsort(data + first, last - first);
	}
	else {
		int lower = first + 1, upper = last;
		swap(data[first], data[(first + last) / 2]);
		T bound = data[first];
		while (lower <= upper) {
			while (data[lower] < bound)
				lower++;
			while (bound < data[upper])
				upper--;
			if (lower < upper)
				swap(data[lower++], data[upper--]);
			else lower++;
		}
		swap(data[upper], data[first]);
		if (first < upper - 1)
			quicksort2(data, first, upper - 1, bc);
		if (upper + 1 < last)
			quicksort2(data, upper + 1, last, bc);
	}
}

template<class T>
void quicksort2(T data[], const int n, unsigned int bc) {
	int i, max;
	if (n < 2)
		return;
	for (i = 1, max = 0; i < n; i++)// find the largest
		if (data[max] < data[i])    // element and put it
			max = i;                // at the end of data[];
	swap(data[n - 1], data[max]); // largest el is now in its
	quicksort2(data, 0, n - 2, bc);     // final position;
}