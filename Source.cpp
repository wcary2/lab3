#include <iostream>
#include <string>

using namespace std;

bool sumShort();
bool factorialTest();
bool sumLong();
bool factorialTestDouble();
bool strangeBehavior();
bool strangeBehaviorDouble();


int main() {
	string option = "";
	while (option != "close") {
		cout << "Enter the name of the function you wish to call: ";
		cin >> option;
		if (option == "sumshort") {
			bool overflowShort = sumShort();
		}
		if (option == "sumlong") {
			bool overflowLong = sumLong();
		}
		if (option == "factorial") {
			bool overflowFactorial = factorialTest();
		}
		if (option == "factorialdouble") {
			bool overflowFactorial = factorialTest();
		}
		if (option == "strange") {
			bool overflowStrange = strangeBehavior();
		}
		if (option == "strangedouble") {
			bool overflowStrangeDouble = strangeBehaviorDouble();
		}
	}
	return 0;
}

bool sumShort() {
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	short sumShort = 0;
	for (int i = 1; i <= n; i++) {
		if (SHRT_MAX < sumShort + i) {
			cout << endl;
			cout << "An overflow was detected: the operation was stopped." << endl;
			cout << "last value of sumShort: " << sumShort << endl;
			cout << "Value of n that caused overflow: " << i << endl << endl;
			return false;
		}
		sumShort += i;
	}
	cout << "sumShort = " << sumShort << endl;
	return true;
}
bool sumLong() {
	long n;
	cout << "Enter value of n: ";
	cin >> n;
	long sumLong = 0;
	for (long i = 1; i <= n; i++) {
		if (sumLong > 0 && i > 0 && sumLong + i < 0) {
			cout << endl << "An overflow was detected: the operation was stopped" << endl;
			cout << "last value of sumLong: " << sumLong << endl;
			cout << "Value of n that caused overflow: " << i << endl << endl;
			return false;
		}
		sumLong += i;
	}
	cout << "sumShort = " << sumLong << endl;
	return true;
}

bool factorialTest() {
	long n;
	cout << "Enter value of n: ";
	cin >> n;
	float testNumber = 1;
	for (long i = 1; i <= n; i++) {
		if (testNumber * i == INFINITY) {
			cout << endl <<"An overflow was detectedL the operation was stopped" << endl;
			cout << "last value of the factorial was: " << testNumber << endl;
			cout << "value of n that caused the overflow: " << i << endl << endl;
			return false;
		}
		testNumber *= i;
	}
	cout << "factorial product: " << testNumber << endl;
	return true;
}

bool factorialTestDouble() {
	long n;
	cout << "Enter value of n: ";
	cin >> n;
	double testNumber = 1;
	for (long i = 1; i <= n; i++) {
		if (testNumber * i == INFINITY) {
			cout << endl << "An overflow was detectedL the operation was stopped" << endl;
			cout << "last value of the factorial was: " << testNumber << endl;
			cout << "value of n that caused the overflow: " << i << endl << endl;
			return false;
		}
		testNumber *= i;
	}
	cout << "factorial product: " << testNumber << endl;
	return true;
}

bool strangeBehavior() {
	double n;
	cout << "Enter value of n: ";
	cin >> n;
	float testNumber = 1;
	for (double i = 1.0; i <= n; i++) {
		testNumber += (1 / n) - 1.0;
	}
	cout << "value of ratio is: " << testNumber << endl;
	return 0;
}

bool strangeBehaviorDouble() {
	double n;
	cout << "Enter value of n: ";
	cin >> n;
	double testNumber = 1;
	for (double i = 1.0; i <= n; i++) {
		testNumber += (1 / n) - (1.0);
	}
	cout << "value of ratio is: " << testNumber << endl;
	return true;
}