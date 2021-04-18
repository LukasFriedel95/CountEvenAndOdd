#include<iostream>
#include<sstream>
using namespace std;

bool isPositiveInt(int in,char inC) {
	if (in >= 0) {
		if (inC >= 48 && inC <= 57) {
			return true;
		}
		else {
			return false;
		}

	}
		
	else
		return false;
	
}
int isEven(int in) {
	if (in % 2 == 0) {
		return 1;
	}
	else
		return 0;
}
char toChar(int in) {
	
	std::string tmp = std::to_string(in);
	char const* num_char = tmp.c_str();
	cout << *num_char;
	return *num_char;
}
int main() {
	int a, b, c, d;
	char aC, bC, cC, dC;
	
	cout << "Enter 4 positive integers.";
	cin >> a >> b >> c >> d;
	aC = toChar(a);
	bC = toChar(b);
	cC = toChar(c);
	dC = toChar(d);
	if (isPositiveInt(a, aC) && isPositiveInt(b, bC) && isPositiveInt(c, cC) && isPositiveInt(d, dC)) {
		int even = 0;
		int odd=0;
		if (isEven(a) == 1) {
			even++;
		}
		else
			odd++;
		if (isEven(b) == 1) {
			even++;
		}
		else
			odd++;
		if (isEven(c) == 1) {
			even++;
		}
		else
			odd++;
		if (isEven(d) == 1) {
			even++;
		}
		else
			odd++;
		if (even == odd) {
			cout << "Same ammount of even and odd numbers.";
		}
		else if (even < odd) {
			cout << "More odd than even numbers.";
		}
		else if (even > odd) {
			cout << "More even than odd numbers";
		}
	}
	else
		cout << "Invalid input!";

	return 0;

}