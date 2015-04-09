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

	void insert(Item x) {
		heap.push_back(x);
		percolateUp(heap.size() - 1);
	}

	void remove() {
		if (!isEmpty() && heap.size() > 1) {
			// Place last element in the top (ie. remove the current root element).
			heap.front() = heap.back();

			// Remove last element, because it is now the root element.
			vector<int>::iterator it = heap.end();
			heap.erase(--it);

			// Percolate down the root.
			percolateDown(0);
		}
	}

	Item peek() {
		if (isEmpty()) return NULL
		else return heap.front();
	}

	bool isEmpty() {
		return heap.empty();
	}

	// PRE	: -
	// POST	: If the heap is a true heap, true is returned. 
	//		  Otherwise, false is returned
	bool isHeap() const
	{
		for (size_t i = 0; i < (heap.size() - 1) / 2; i++)
		{
			if (smallest(i) != i) return false;
		}
		return true;
	}

private:
	// Attributes
	vector<Item> heap;

	// Methods
	void percolateUp(size_t i) {
		if (heap.at(i) < heap.at(parent(i))) {
			swap(i, parent(i));
			percolateUp(parent(i));
		}
	}

	void percolateDown(size_t i) {
		// Find index of smallest child
		size_t smallestChild = (heap.at(left(i)) < heap.at(right(i)) ? left(i) : right(i));

		if (heap.at(i) > heap.at(smallestChild)) {
			swap(i, smallestChild);
			percolateDown(smallestChild);
		}
	}

	// PRE	: 0 <= i < heap.size()
	// POST	: Returns the index of the smallest of element i and its two children
	size_t smallest(size_t i) const	// returns index of smallest of i and its parents
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
		// Check if it's right child or left child.
		// i % 2 = 0 means it's the right child.
		// i % 2 != 0 means it's the left child.
		if (i % 2) {
			return (i - 2) / 2;
		}
		else {
			return (i - 1) / 2;
		}
	}

	size_t left(size_t i) {
		return 2 * i + 1;
	}

	size_t right(size_t i) {
		return 2 * i + 2;
	}
};
