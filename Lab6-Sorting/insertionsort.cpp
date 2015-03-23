#include <iostream>

using namespace std;

void insertionsort(int data[], signed int size) {
	if (size < 2) return;

	for (int i = 1; i < size; i++) {
		int temp = data[i];
		int j = i;

		while (temp < data[j - 1] && j > 0) {
			data[j] = data[j - 1];
			j--;
		}
		data[j] = temp;
	}
}