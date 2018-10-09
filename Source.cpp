#include <iostream>
#include <string>

using namespace std;

bool sumShort();
bool factorialTest();
bool sumLong();
bool factorialTestDouble();
bool strangeBehavior();
bool strangeBehaviorDouble();
bool puzzle();
bool puzzleDouble();

int main() {
	string option = "";
	while (option != "close") {
		cout << endl << "sumshort" << endl << "sumlong" << endl << "factorial" << endl
			<< "factorialdouble" << endl << "strange" << endl << "strangedouble" << endl
			<< "puzzle" << endl << "puzzledouble" << endl
			<< "Enter the command you wish to call: ";
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
			bool overflowFactorial = factorialTestDouble();
		}
		if (option == "strange") {
			bool overflowStrange = strangeBehavior();
		}
		if (option == "strangedouble") {
			bool overflowStrangeDouble = strangeBehaviorDouble();
		}
		if (option == "puzzle") {
			bool puzzlebool = puzzle();
		}

		if (option == "puzzledouble") {
			bool puzzledoublebool = puzzleDouble();
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
			cout << "last value of n before overflow: " << i - 1 << endl << endl;
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
			cout << "last value of n before overflow: " << i - 1 << endl << endl;
			cout << "Value of n that caused overflow: " << i << endl << endl;
			return false;
		}
		sumLong += i;
	}
	cout << endl <<"sumShort = " << sumLong << endl;
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
			cout << "last value of n before overflow: " << i - 1 << endl;
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
			cout << "last value of n before overflow: " << i - 1 << endl << endl;
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
	float ratio = 1.0 / n;
	float sum = 0;
	for (float i = 1.0; i <= n; i++) {
		sum += ratio;
	}
	cout << "value of the ratio is: " << ratio << endl;
	cout << "the sum of the " << n << " times is: " << sum << endl;
	return 0;
}

bool strangeBehaviorDouble() {
	double n;
	cout << "Enter value of n: ";
	cin >> n;
	double ratio = (1.0/ n);
	double sum = 0;
	for (double i = 1.0; i <= n; i++) {
		sum += ratio;
	}
	cout << "value of the ratio is: " << ratio << endl;
	cout << "the sum of the " << n << " times is: " << sum << endl;
	return true;
}

bool puzzle() {
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return true;
}

bool puzzleDouble() {
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	return true;
}