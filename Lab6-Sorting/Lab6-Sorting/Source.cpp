#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "quicksort2.hpp"

using namespace std;

int main() {
	const int SIZE = 100;

	srand(time(NULL));

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " - ";
	}
	cout << endl << endl;

	quicksort2(arr, SIZE, 20);

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}