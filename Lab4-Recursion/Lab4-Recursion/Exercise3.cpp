//#include <iostream>
//
//void bookletPrint(int startPage, int endPage);
//
//int main() {
//	bookletPrint(1, 14);
//
//	return 0;
//}
//
///*
//Step 1: Print pages, four on each sheet (ie. 1-8 = 1 2 7 8 and 3 4 5 6).
//Step 2: BC -> (endPage - startPage)+1 <= 4. Print the last pages left (startPage -> endPage).
//Step 3: RC -> (endPage - startPage)+1 > 4. Print: Page #(startPage+1)/2  Two first pages. Two last pages. Call bookletPrint(startPage+2, endPage-2);
//Step 4: startPage is count up, endPage down, therefore the function eventually reaches the BC.
//*/
//void bookletPrint(int startPage, int endPage) {
//	if ((endPage - startPage + 1) > 4) {
//		std::cout << "Sheet " << ((startPage + 1) / 2) << " contains pages " << startPage << ", " << (startPage + 1) << ", " << (endPage - 1) << ", " << endPage << std::endl;
//		bookletPrint(startPage+2, endPage-2);
//	}
//	else {
//		std::cout << "Sheet " << ((startPage + 1) / 2) << " contains pages ";
//		for (startPage; startPage < endPage; startPage++) {
//			std::cout << startPage << ", ";
//		}
//		std::cout << endPage << std::endl;
//	}
//}