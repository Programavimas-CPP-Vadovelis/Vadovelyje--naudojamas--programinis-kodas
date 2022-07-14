import <iostream>;
using namespace std;
//
int main() {
	unsigned long number, divisor;
	char c = 't'; // inicializavimo gali prireikti continue atveju
	//
	do {
	cout << "Iveskite skaiciu\n";
	cin >> number;
	cout << "Iveskite dalikli\n";
	cin >> divisor;
	cout << "Ivestas skaicius: " << number << ", jo daliklis " << divisor << 
	endl;

		if (divisor <= number) {

	if (divisor == 0) {
	cout << "Bloga daliklio reiksme!\n";
	continue; // pastaba 1
	// break; // pastaba 2
}
	cout << "Dalybos rezultatas: " << number / divisor << " likutis: " <<
	number % divisor << endl;
		}

		else {
	cout << "Daliklis turi buti ne didesnis uz skaiciu\n";
		}

		cout << "Ar testi?: t/n\n";
		cin >> c;

	} while (c != 'n');
	//
}
