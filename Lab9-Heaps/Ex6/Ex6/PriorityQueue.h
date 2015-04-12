#pragma once
#include "MinHeap.h"

template<typename Item>
class PriorityQueue {
public:
	PriorityQueue() {
		cout << "Creating PriorityQueue!" << endl;
	}

	void push(Item x) {
		minHeap.insert(x);
	}
	
	Item top() {
		return minHeap.peek();
	}
	
	void pop() {
		minHeap.remove();
	}
	
	bool isEmpty() {
		return minHeap.isEmpty();
	}
private:
	MinHeap<Item> minHeap;
};