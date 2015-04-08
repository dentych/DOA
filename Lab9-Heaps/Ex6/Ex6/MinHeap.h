#include<vector>
#include<iostream>

using namespace std;

//==================================================
// CLASS MinHeap
//==================================================
template<typename T>
class MinHeap
{
public:

	void insert(T x) {
		heap.push_back(x);
		percolateUp(heap.size() - 1);
	}

	void remove();

	T peek() {
		if (isEmpty()) return NULL
		else return heap.front();
	}

	bool isEmpty();

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
	vector<T> heap;

	void percolateUp(size_t i) {
		if ()
	}

	void percolateDown(size_t i);

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
		T temp = heap[x];
		heap[x] = heap[y];
		heap[y] = temp;
	}

	size_t parent(size_t i);

	size_t left(size_t i);

	size_t right(size_t i);
};
