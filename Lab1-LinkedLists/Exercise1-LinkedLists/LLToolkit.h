#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class LLToolkit {
public:
	void headInsert(Node*& headPtr, int info);
	void headRemove(Node*& headPtr);
	void insert(Node* prevPtr, int info);
	void remove(Node* prevPtr);
	Node * copy(Node* sourcePtr);

	// Advanced features :D
	void reverse(Node*& headPtr);
	void rotateLeft(Node*& head);
	void print(Node*& head);
};