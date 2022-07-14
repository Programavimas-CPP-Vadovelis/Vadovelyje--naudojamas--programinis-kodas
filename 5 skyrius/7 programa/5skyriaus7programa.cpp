import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
double power(double x, size_t n);
//
int main() {
	double number;
	int index;
	//
	cout << "Iveskite skaiciu ir laipsnio rodikli\n";
	cin >> number >> index;
	cout << "Pradinis skaicius " << number << " rodiklis  " << index << endl;
	//
	cout << "Rezultatas [skaicius ^ rodiklis] "
	     << power(number, index) << endl;
	cout << "Rezultatas [skaicius ^ (skaicius ^ rodiklis)] "
	     << power(number, power(number, index)) << endl;
	//
}
//	
double power(double x, size_t n) {
	// Argumentai: x – pradinis skaičius
	//             n – skaičiaus laipsnio rodiklis
	//Grąžinama reikšmė : r – kėlimo laipsniu rezultatas 
	double r = 1.;
	for (size_t i = 1; i <= n; i++)    r *= x;
	return r;
}
