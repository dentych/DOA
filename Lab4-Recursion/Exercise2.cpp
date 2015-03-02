//#include <iostream>
//
//bool search(int x, int ar[], unsigned int n);
//
//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	if (search(1, arr, 6))
//		std::cout << "YES!" << std::endl;
//	else
//		std::cout << "NO!" << std::endl;
//
//	return 0;
//}
//
///*
//Step 1: Search an array after a specific item. Time complexity n.
//Step 2: BC -> n == 0. Search for x at ar[n], if not found, return false, else return true.
//Step 3: RC -> n > 0. Search for x at ar[n]. If found, return true, else search(x, n-1).
//Step 4: n counts down and will eventually hit n == 0.
//*/
//bool search(int x, int ar[], unsigned int n) {
//	if (n > 0) {
//		if (ar[n] == x)
//			return true;
//		else
//			return search(x, ar, n-1);
//	}
//	else {
//		if (ar[n] == x)
//			return true;
//		else
//			return false;
//	}
//}