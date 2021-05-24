#include <iostream>
//#include <string>
//using namespace std;

// C++ for Beginners | Solve 75+ Coding Exercises | OOP
// https://www.udemy.com/course/unlimited-cpp-exercises/


// Kodlama Egzersizi: 5
int circuitPower(int voltage, int current) {
	return voltage * current;
}

// Kodlama Egzersizi: 6
bool dividesEvenly(int a, int b) {
	int c = a % b; // mod alma
	bool ret;
	if (c == 0) ret = true; else ret = false; // kalan 0 ile tam b�l�n�r.
	return ret;

	// short answer
	//return (a % b == 0);

}

// Kodlama Egzersizi: 7
bool divisibleByHundred(int num) {
	return  (num % 100 == 0);
}


// Kodlama Egzersizi: 8
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



// Kodlama Egzersizi: 9
bool andAnd(bool a, bool b) {

	bool c;
	// cevab�m 1
	//if (a && !b) return false;
	//if (a && b) return true;
	//if (!a && b) return false;
	//if (!a && !b) return false;

	// cevab�m 2
	return (a && !b) ? c = false : (a && b) ? c = true : (!a && b) ? c = false : (!a && !b) ? c = false : false;

}
// Kodlama Egzersizi: 10
//  parametre olarak g�nderilen say�n�n tek(odd) mi �ift (even) mi oldu�unu bulan metot.
std::string isEvenOrOdd(int num) {
	return (num % 2 == 0) ? "Even" : "Odd";
	//if (num % 2 == 0) return "Even"; else return "Odd";
}

// Kodlama Egzersizi: 11
// 1 - parametre olarak g�nderilen iki say�s� �zerinde 4 i�lem yaparak 24 say�n�n elde etmelisiniz.
// 2 - 24 say�s�n� elde etti�iniz i�lemi string olarak geri d�n�� olarak g�nderin.
std::string operation(int num1, int num2) {
	if (num1 + num2 == 24) return "added";
	else if (num1 - num2 == 24 || num2 - num1 == 24) return "subtracted";
	else if (num1 / num2 == 24 || num2 / num1 == 24) return "divided";
	else if (num1 * num2 == 24) return "multiplied";
	else return "Invalid";
}

// Kodlama Egzersizi: 12
bool divisibleByFive(int num) {
	return  (num % 5 == 0) ? true : false;
	// daha k�sa cevap
	// return num%5==0;
}

// Kodlama Egzersizi: 13
// ?: operat�r�n� kullanarak, parametre do�ru ise yeah yanl�� ise nope yazd�ran metodu yaz�n
std::string yeahNope(bool b) {
	return	(b) ? "yeah" : "nope";
	//return b==1? "yeah":"nope";
}

// Kodlama Egzersizi: 14
// bir ki�inin MA15+ derecelendirmeli bir filmi izleyebilip izleyemeyece�ini kontrol eden bir metot yaz�n
// ya� en az 15 olabilir
// ebeveyn kontrol� olacak
bool acceptIntoMovie(int age, bool isSupervised) {
	if (age >= 15 && isSupervised == true) return true;
	else if (age >= 15 && isSupervised == false) return true;
	else if (age < 15 && isSupervised == false) return false;
	else if (age < 15 && isSupervised == true) return true;
	// K�sa Cevap
	// return age < 15 && isSupervised == 0 ? 0 : 1;
}

// Kodlama Egzersizi: 15
// ald��� parametreye selam veren metodu yaz�n.
std::string helloName(std::string name) {
	return 	"Hello " + name + "!";
}

// Kodlama Egzersizi: 16
// num1 �s num2 olacak �ekilde �al��an meto�du yaz�n�z.
#include <cmath>
double calculateExponent(double num1, double num2) {
	//yol 1
	return	pow(num1, num2);

	// yol2
	//double sonuc = 1;
	//for (int i = 1; i <= num2; i++)
	//	sonuc = sonuc * num1;
	//return sonuc;
}

// Kodlama Egzersizi: 17
// bir dizi olarak say� alan ve	say�lar�n k�plerinin toplamlar�n� veren metodu yaz�n.
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int sumOfCubes(std::vector<int> nums) {
	double sonuc = 0;
	for (int i = 0; i < nums.size(); i++)
		sonuc += pow(nums[i], 3);
	return sonuc;
}


void main() {

	std::cout << andAnd(true, false) << std::endl;
	std::cout << andAnd(true, true) << std::endl;
	std::cout << andAnd(false, true) << std::endl;
	std::cout << andAnd(false, false) << std::endl;

}




