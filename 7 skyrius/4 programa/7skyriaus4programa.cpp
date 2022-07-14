export module degrees;

//import <iostream>; // šioje vietoje reikėtų importuoti visus kitus būtinus modulius; 
	         // šiame modulyje to nereikia

export auto square(const auto& x) { // auto – bet kokiam formatui, & - argumento perdavimo efektyvumui, const – perdavimo saugumui

	return x * x;
}

export auto cube(const auto& x) {
	return x * x * x;
}
bool isOdd(int x) { // lokali funkcija; neeksportuojama
	return x % 2 != 0; // jei likutis nelygus nuliui – grąžinti true
}

export auto result(const int& x) {
	if (isOdd(x)) return square(x);
	else return cube(x);
}

import <iostream>;
import degrees;
using std::cout; 
using std::endl;
//
int main() {
	//
	int number1 = 9, number2 = 10; 
	//
	cout << "Skaiciui 9: " << result(number1) << endl;
	cout << "Skaiciui 10: " << result(number2) << endl;

	cout << "Skaiciui 12: " << cube(number3) << endl;

	//cout << " Skaiciui 9: " << isOdd(number1) << endl;
}
