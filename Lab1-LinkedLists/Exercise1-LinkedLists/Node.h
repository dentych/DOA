#pragma once
#include <iostream>

class Node {
public:
	Node(int i = 0, Node * n = NULL);
	int info;
	Node * next;
};