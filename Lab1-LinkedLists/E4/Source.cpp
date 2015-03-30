#include <iostream>
#include "Node.h"
#include "LLToolkit.h"

using namespace std;

int main() {
	Node<int> * head = NULL;

	LLToolkit<int> tk;

	tk.headInsert(head, 5);
	tk.headInsert(head, 10);
	tk.headInsert(head, 8);

	for (Node<int> * cur = head; cur != NULL; cur = cur->next) {
		cout << "#" << cur->info << endl;
	}

	return 0;
}