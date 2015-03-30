//#include <iostream>
//
//void pattern(unsigned int n, unsigned int i);
//
//int main() {
//	int n, i;
//	std::cout << "Value for n: ";
//	std::cin >> n;
//	std::cout << "Value for i: ";
//	std::cin >> i;
//	pattern(n,i);
//}
//
///*
//Step 1: LAV EN NICE LINJE.
//Step 2: BC -> n == 0. DO NOTHING AT ALL.
//Step 3: RC -> n > 0. pattern(n/2, i). cout indrykning. cout << "* ". pattern(n/2, i+(n/2)).
//Step 4: Yep, yep. n bliver 0 på et tidspunkt...
//*/
//void pattern(unsigned int n, unsigned int i) {
//	if (n == 0) return;
//	else {
//		pattern(n/2, i);
//		for (int j = 0; j < i; j++)
//			std::cout << "  ";
//		for (int j = 0; j < n; j++)
//			std::cout << "* ";
//		std::cout << std::endl;
//		pattern(n/2, i+(n/2));
//	}
//}