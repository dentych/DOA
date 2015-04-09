#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MinHeap.h"

using namespace std;

int main() {
	/* Test of minHeap! */
	MinHeap<int> heap;
	srand(time(NULL));

	int rNum;
	for (int i = 0; i < 10; i++) {
		rNum = rand() % 100;
		cout << "Inserting: " << rNum << endl;
		heap.insert(rNum);
	}

	heap.remove();
	heap.remove();
	heap.remove();

	cout << "Is it a heap? " << (heap.isHeap() ? "true" : "false") << endl;
	heap.print();
}