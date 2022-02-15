#include <iostream>
using namespace std;

int main() {
	
	double firstNum;
	double secondNum;
	double thirdNum;
	
	cout << "FIND THE LARGEST NUMBER\n\n";
	
	cout << "1st number: ";
	cin >> firstNum;
	cout << "2nd number: ";
	cin >> secondNum;
	cout << "3rd number: ";
	cin >> thirdNum;
	cout << "\n\n";
	
	if((firstNum > secondNum) && (firstNum > thirdNum)) {
		
		cout << "Largest Number: " << firstNum;
		cout << "\nThe first number is the largest number.";
		
	}
	else if((secondNum > firstNum) && (secondNum > thirdNum)) {
		
		cout << "Largest Number: " << secondNum;
		cout << "\nThe second number is the largest number.";
		
	} 
	else {
		cout << "Largest Number: " << thirdNum;
		cout << "\nThe third number is the largest number.";
		
	}
	
	return 0;
}
