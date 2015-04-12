#pragma once
#include<vector>
#include<iostream>

using namespace std;

//==================================================
// CLASS MinHeap
//==================================================
template<typename Item>
class MinHeap
{
public:
	// Default constructor
	MinHeap(int debug = 0) {
		if (debug > 0) {
			cout << "Creating minimum heap with default constructor!" << endl;
			debugLevel = debug;
		}
	}

	// Constructor that takes a vector as parameter.
	// The constructor will generate a heap from the vector array.
	MinHeap(vector<Item> & vec, int debug = 0) {
		for (int i = 0; i < vec.size(); i++) {
			insert(vec.at(i));
		}
		if (debug > 0) {
			cout << "Creating minimum heap from a vector array!" << endl;
			debugLevel = debug;
		}
	}

	// Insert the element into the heap.
	void insert(Item x) {
		heap.push_back(x);
		if (heap.size() > 1) {
			percolateUp(heap.size() - 1);
		}
		if (debugLevel > 0) {
			cout << "Inserted value " << x << endl;
		}
	}

	// Remove the root element.
	void remove() {
		if (!isEmpty() && heap.size() > 1) {
			// Place last element in the top (ie. remove the current root element).
			heap.front() = heap.back();

			// Remove last element, because it is now the root element.
			vector<int>::iterator it = heap.end();
			heap.erase(--it);

			// Percolate down the root.
			percolateDown(0);
			if (debugLevel > 0) {
				cout << "Removed root element from heap." << endl;
			}
		}
		else {
			if (debugLevel > 0) {
				cout << "Tried to remove root element, but heap is empty." << endl;
			}
		}
	}

	// Return root element.
	Item peek() {
		if (isEmpty()) return NULL
		else return heap.front();

		if (debugLevel > 0) {
			cout << "Peeking!" << endl;
		}
	}

	// Check if the heap is empty.
	// Returns true if empty
	// False if the heap contains data.
	bool isEmpty() const {
		return heap.empty();
	}

	// PRE	: -
	// POST	: If the heap is a true heap, true is returned. 
	//		  Otherwise, false is returned
	bool isHeap()
	{
		for (size_t i = 0; i < (heap.size() - 1) / 2; i++)
		{
			if (smallest(i) != i) return false;
		}
		return true;
	}

	// Print out the heap array to stdout.
	void print() const {
		for (int i = 0; i < heap.size(); i++) {
			if (i == heap.size() - 1) {
				cout << heap.at(i) << endl;
			}
			else {
				cout << heap.at(i) << " | ";
			}
		}
	}

private:
	// Attributes
	vector<Item> heap;
	int debugLevel;

	// Methods
	void percolateUp(size_t i) {
		if (debugLevel > 0) {
			cout << "Percolating up. Index: " << i << endl;
		}
		if (heap.at(i) < heap.at(parent(i))) {
			swap(i, parent(i));
			percolateUp(parent(i));
		}
	}

	void percolateDown(size_t i) {
		if (debugLevel > 0) {
			cout << "Percolating down. Index: " << i << endl;
		}
		// Find index of smallest child
		size_t smallestChild = (heap.at(left(i)) <= heap.at(right(i)) ? left(i) : right(i));

		if (heap.at(i) > heap.at(smallestChild)) {
			swap(i, smallestChild);
			percolateDown(smallestChild);
		}
	}

	// PRE	: 0 <= i < heap.size()
	// POST	: Returns the index of the smallest of element i and its two children
	size_t smallest(size_t i)// returns index of smallest of i and its parents
	{
		size_t small = i;

		if (left(i) < heap.size() &&
			heap[i] > heap[left(i)])
			small = left(i);

		if (right(i) < heap.size() &&
			heap[i] > heap[right(i)] &&
			heap[right(i)] < heap[left(i)])
			small = right(i);

		return small;
	}

	// PRE	: 0 <= {x, y} < heap.size()
	// POST	: Elements with indices x and y are swapped
	void swap(size_t x, size_t y)
	{
		Item temp = heap[x];
		heap[x] = heap[y];
		heap[y] = temp;
	}

	size_t parent(size_t i) {
		// Make sure the node actually has a parent
		if (i > 0) {
			size_t index = 0;
			// Check if it's right child or left child.
			// i % 2 = 0 means it's the right child.
			// i % 2 > 0 means it's the left child.
			if (i % 2) {
				index = (i - 1);
				index /= 2;
				return index;
			}
			else {
				index = (i - 2);
				index /= 2;
				return index;
			}
		}
		else {
			return 0;
		}
	}

	size_t left(size_t i) {
		size_t leftIndex = 2 * i + 1;
		if (leftIndex < heap.size()) {
			return leftIndex;
		}
		else {
			return i;
		}
	}

	size_t right(size_t i) {
		size_t rightIndex = 2 * i + 2;
		if (rightIndex < heap.size()) {
			return 2 * i + 2;
		}
		else {
			return i;
		}
	}
};