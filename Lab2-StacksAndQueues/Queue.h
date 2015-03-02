#pragma once
#include <iostream>
#include "LLToolkit.h"

template <typename T>
class Queue {
public:
	Queue() : head(NULL), tail(NULL) {}
	~Queue() {
		tk.clear(head);
		head = NULL;
		tail = NULL;
	}

	Queue & push(T info) {
		if (head == NULL) {
			tk.headInsert(head, info);
			tail = head;
		}
		else {
			tk.insert(tail, info);
			tail = tail->next;
		}

		return *this;
	}

	Queue & pop() {
		if (head != NULL) {
			tk.headRemove(head);
		}

		return *this;
	}

	T front() {
		if (head == NULL) return 0;

		return head->info;
	}

	bool isEmpty() {
		if (head == NULL) return true;
		else return false;
	}

	void dump() {
		tk.print(head);
	}
private:
	Node<T> * head, * tail;
	LLToolkit<T> tk;
};