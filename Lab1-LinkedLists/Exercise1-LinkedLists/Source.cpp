#include <iostream>
#include "Node.h"
#include "LLToolkit.h"

using namespace std;

int main() {
	Node * head = NULL;

	LLToolkit tk;

	tk.headInsert(head, 5);
	tk.headInsert(head, 10);
	tk.headInsert(head, 8);

	tk.print(head);

	tk.reverse(head);

	tk.print(head);

	tk.rotateLeft(head);

	tk.print(head);

	return 0;
}