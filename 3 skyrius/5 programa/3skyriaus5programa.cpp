import <iostream>;
using std::cout;
using std::cin;
using std::endl;

int main() {
	//
	unsigned long number, divisor;
	char c;
	//
	do {
	cout << "Iveskite skaiciu\n";
	cin >> number;
	cout << "Iveskite dalikli\n";
	cin >> divisor;
	cout << "Ivestas skaicius: " << number << ", jo daliklis " << divisor << endl;
	cout << "Dalybos rezultatas: " << number / divisor << ", likutis: "
		<< number % divisor << endl;
	cout << "Ar testi skaiciavimus?: t/n\n";
	cin >> c;
	} while (c != 'n');
  //
}
