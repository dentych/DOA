#pragma once
#include "Node.h"

template <typename T>
class LLToolkit {
public:
	void headInsert(Node<T>*& headPtr, T info) {
		headPtr = new Node<T>(info, headPtr);
	}

	void headRemove(Node<T>*& headPtr) {
		if (headPtr == NULL) return;

		Node<T> * tmp = headPtr;
		headPtr = tmp->next;
		delete tmp;
	}

	void insert(Node<T>* prevPtr, T info) {
		prevPtr->next = new Node<T>(info, prevPtr->next);
	}

	void remove(Node<T>* prevPtr) {
		Node<T> * tmp = prevPtr->next;
		prevPtr->next = tmp->next;
		delete tmp;
	}

	void clear(Node<T> * head) {
		if (head == NULL) return;

		do {
			headRemove(head);
		} while (head != NULL);
	}

	Node<T> * copy(Node<T>* sourcePtr) {
		if (sourcePtr == NULL) return NULL;

		Node<T> * head = NULL;
		Node<T> * lastAdded = head;
		for (Node<T> * cursorPtr = sourcePtr; cursorPtr != NULL; cursorPtr = cursorPtr->next) {
			insert(lastAdded, cursorPtr->info);
			lastAdded = lastAdded->next;
		}

		return head;
	}

	void print(Node<T> * head) {
		if (head == NULL) {
			cout << "## Error: Empty list ##" << endl;
			return;
		}

		for (head; head != NULL; head = head->next) {
			if (head->next == NULL)
				cout << head->info << endl;
			else
				cout << head->info << " - ";
		}
	}
};