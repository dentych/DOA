//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void coolNumber(string, string);
//
//// Global variable for easy mode
//string numToLetter[26] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//ofstream file;
//
//int main() {
//	file.open("numbers.txt");
//	coolNumber("", "25593401");
//	file.close();
//}
//
///*
//
//*/
//void coolNumber(string str, string number) {
//	if (number.length() == 0) {
//		file << str << endl;
//	}
//	else {
//		int num = number[0]-48;
//		number.erase(0, 1);
//		if (num >= 2 && num <= 9) {
//			for (int i = 0; i < numToLetter[num-2].length(); i++) {
//				string newStr = str;
//				newStr.push_back(numToLetter[num-2][i]);
//				coolNumber(newStr, number);
//			}
//		}
//		else {
//			coolNumber(str, number);
//		}
//	}
//}