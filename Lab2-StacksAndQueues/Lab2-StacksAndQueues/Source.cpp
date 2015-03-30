#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "PriorityQueue.h"

using namespace std;

int main() {
	PriorityQueue<int> pq;
	
	srand(time(NULL));
	for (int i = 0; i < 200; i++) {
		int info = rand() % 100 + 1;
		int pri = rand() % 5;
		pq.push(info, pri);
	}

	pq.dump();

	return 0;
}