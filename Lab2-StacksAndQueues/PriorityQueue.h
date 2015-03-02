#pragma once
#include <string>
#include "Queue.h"

enum Priority {
	LOW,
	LOWMED,
	MED,
	MEDHIGH,
	HIGH
};

template <typename T>
class PriorityQueue {
public:
	PriorityQueue() {}
	~PriorityQueue() {}

	PriorityQueue & push(T info, int pri) {
		queue[pri].push(info);
		
		return *this;
	}

	PriorityQueue & pop() {
		for (int p = HIGH; p >= LOW; p--) {
			if (!queue[p].isEmpty()) {
				queue[p].pop();
				return *this;
			}
		}
		return *this;
	}

	T front() {
		for (int p = HIGH; p >= LOW; p--) {
			if (!queue[p].isEmpty()) {
				return queue[p].front();
			}
		}
		return 0;
	}

	bool isEmpty() {
		for (int p = HIGH; p != LOW; p--) {
			if (!queue[p].isEmpty()) return false;
		}
		return true;
	}

	void dump() {
		string names[5] = { "LOW", "LOWMED", "MED", "MEDHIGH", "HIGH" };
		cout << "## Printing content of PriorityQueue ##" << endl;
		for (int p = HIGH; p >= LOW; p--) {
			cout << names[p] << ":" << endl;
			queue[p].dump();
		}
	}
private:
	Queue<T> queue[HIGH+1];
};