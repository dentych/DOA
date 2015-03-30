//#include <iostream>
//
//using namespace std;
//
//bool binarySearch(int[], int, int, int);
//
//int main() {
//	int arr[100];
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i;
//	}
//	cout << binarySearch(arr, 100, 0, 99) << endl;
//	return 0;
//}
//
///*
//Step 1: Find et tal i et array. Returner true, hvis den finder tallet, false hvis ikke. Kompleksitet end-start. O(n)
//Step 2: BC -> (end-start)<=2. Check tallene for, om de er lig med det søgte.
//Step 3: RC -> (end-start) > 2. Find tallet i midten af arrayet. Hvis tallet er lavere end det søgte, behold "øverste"
//halvdel af array. Hvis tallet er større end det søgte, så behold den "nederste" del af arrayet.
//Øverste halvdel -> kald binarySearch(arr, find, start+index, end);
//Nederste halvdel -> kald binarySearch(arr, find, start, end-index);
//Step 4: Array bliver hele tiden mindre, og vil i sidste ende ramme BC.
//*/
//bool binarySearch(int arr[], int find, int start, int end) {
//	int size = end - start;
//	if (size <= 2) {
//		if (size == 2) {
//			if (arr[start] == find || arr[end] == find)
//				return true;
//			else
//				return false;
//		}
//		else {
//			if (arr[start] == find)
//				return true;
//			else
//				return false;
//		}
//	}
//	else {
//		int middle = (size/2);
//		middle += start;
//
//		if (arr[middle] == find) return true;
//		if (arr[middle] > find) {
//			return binarySearch(arr, find, start, end-middle);
//		}
//		else {
//			return binarySearch(arr, find, start+middle, end);
//		}
//	}
//}