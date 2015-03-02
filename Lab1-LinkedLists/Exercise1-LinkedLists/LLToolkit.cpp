#include "LLToolkit.h"

// Precondition: headPtr points to the head of a list
// Postcondition: Info has been inserted at the head of the list, and headPtr is updated
void LLToolkit::headInsert(Node*& headPtr, int info) {
	headPtr = new Node(info, headPtr);
}

// Precondition: headPtr points to the head of a list with at least 1 element
// Postcondition: The head element has been removed and headPtr is updated to point to the new
// head element
void LLToolkit::headRemove(Node*& headPtr) {
	if (headPtr == NULL) return;

	Node * tmp = headPtr;
	headPtr = tmp->next;
	delete tmp;
}

// Precondition: prevPtr points to Node just before insertion point
// Postcondition: A new Node with data=info has been inserted into the list after prevPtr
void LLToolkit::insert(Node* prevPtr, int info) {
	prevPtr->next = new Node(info, prevPtr->next);
}

// Precondition: prevPtr points to Node just before Node to remove
// Postcondition: The Node after prevPtr has been removed from the list
void LLToolkit::remove(Node* prevPtr) {
	Node * tmp = prevPtr->next;
	prevPtr->next = tmp->next;
	delete tmp;
}

// Precondition: sourcePtr is the head pointer of a linked list.
// Postcondition: A pointer to a copy of the linked list is returned. The original list is
// unaltered.
Node* LLToolkit::copy(Node* sourcePtr) {
	if (sourcePtr == NULL) return NULL;

	Node * head = NULL;
	Node * lastAdded = head;
	for (Node * cursorPtr = sourcePtr; cursorPtr != NULL; cursorPtr = cursorPtr->next) {
		insert(lastAdded, cursorPtr->info);
		lastAdded = lastAdded->next;
	}

	return head;
}

// Precondition: headPtr is the head pointer of a linked list.
// Postcondition: headPtr points to the start of a list that is reversed with respect to the
// original list
void LLToolkit::reverse(Node*& headPtr) {
	if (headPtr == NULL || headPtr->next == NULL) return;

	Node *move, *nextPtr;
	nextPtr = headPtr->next;
	move = NULL;
	headPtr->next = NULL;

	while (nextPtr != NULL) {
		move = nextPtr;
		nextPtr = nextPtr->next;
		move->next = headPtr;
		headPtr = move;
	}
}

// Precondition: head points to the head of a linked list
// Postcondition: The list is rotated left by once - if it was 1-2-3-4, it is now 2-3-4-1
void LLToolkit::rotateLeft(Node*& head) {
	if (head == NULL || head->next == NULL) return;

	Node * newHead = head->next;
	head->next = NULL;

	Node * tmp;
	for (tmp = newHead; tmp->next != NULL; tmp = tmp->next);
	tmp->next = head;
	head = newHead;
}

void LLToolkit::print(Node*& head) {
	cout << "Printing linked list:" << endl;
	for (Node * cur = head; cur != NULL; cur = cur->next) {
		cout << "Info: " << cur->info << endl;
	}
	cout << "End of linked list." << endl;
}