#pragma once
#include <iostream>

template <typename T>
class Node {
public:
	// Constructor
	Node(T i = 0, Node * n = NULL) : info(i), next(n) {}

	// Variables
	T info;
	Node * next;
};