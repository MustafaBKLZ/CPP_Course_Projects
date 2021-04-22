#include <iostream>
//#include <string>
//using namespace std;

// C++ for Beginners | Solve 75+ Coding Exercises | OOP
// https://www.udemy.com/course/unlimited-cpp-exercises/


// Q: 12 
int circuitPower(int voltage, int current) {
	return voltage * current;
}

// Q: 13
bool dividesEvenly(int a, int b) {
	int c = a % b; // mod alma
	bool ret;
	if (c == 0) ret = true; else ret = false; // kalan 0 ile tam bölünür.
	return ret;

	// short answer
	//return (a % b == 0);

}

// Q: 14
bool divisibleByHundred(int num) {
	return  (num % 100 == 0);
}



// Q: 15
std::string helloWorld(int num) {
	int m3 = num % 3;
	int m5 = num % 5;
	std::string ret;
	if (m3 == 0)			ret = "Hello";
	if (m5 == 0)			ret = "World";
	if (m3 == 0 && m5 == 0)		ret = "Hello World";
	return ret;

	// short answer
	//return num % 3 == 0 && num % 5 == 0 ? "Hello World" : num % 3 == 0 ? "Hello" : num % 5 == 0 ? "World" : "";
}




void main() {



}




