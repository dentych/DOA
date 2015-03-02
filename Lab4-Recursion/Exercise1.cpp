//#include <iostream>
//
//void triangle(unsigned int, unsigned int);
//void drawLine(short int);
//
//int main() {
//	triangle(5, 15);
//
//	return 0;
//}
//
///*
//Step 1: Count up from m to n, then count down from n to m again. Time complexity "n" and "m".
//Step 2: Base case m == n. Print linje og afslut.
//Step 3: RC når m < n. Print linje og kald triangle(m+1, n) og print derefter linje igen.
//Step 4: m tæller op hver gang, og bliver til sidst m == n (BC).
//*/
//// Precondition: m <= n
//// Postcondition: The function has printed a pattern of lines so that the
//// first line contains m stars, the next line contains m+1 stars, and so on
//// up to a line with n asterisks.
//// Then the pattern is repeated backwards, going n back down to m.
//// Example output:
//// triangle(4, 6) will print this:
//// ****
//// *****
//// ******
//// ******
//// *****
//// ****
//void triangle(unsigned int m, unsigned int n) {
//	if (m < n) {
//		drawLine(m);
//		triangle(m+1, n);
//		drawLine(m);
//	}
//	else {
//		drawLine(m);
//	}
//}
//
//void drawLine(short int numLines) {
//	for (int i = 0; i < numLines; i++)
//		std::cout << "*";
//	std::cout << std::endl;
//}