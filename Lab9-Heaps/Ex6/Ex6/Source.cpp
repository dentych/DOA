#include <iostream>
#include "MinHeap.h"

using namespace std;

int main() {
	/* Test of minHeap! */
	MinHeap<int> heap;

	heap.insert(5);
	heap.insert(10);
	heap.insert(50);
	heap.insert(34);
	heap.insert(22);
	heap.insert(17);
	heap.insert(47);

	heap.print();
}