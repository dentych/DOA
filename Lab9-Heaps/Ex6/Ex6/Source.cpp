#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MinHeap.h"

using namespace std;

int main() {
	/* Test of minHeap! */
	MinHeap<int> heap;
	srand(time(NULL));

	for (int i = 0; i < 30; i++) {
		heap.insert(rand() % 100);
	}

	cout << "Is it a heap? " << (heap.isHeap() ? "true" : "false") << endl;
	heap.print();
}