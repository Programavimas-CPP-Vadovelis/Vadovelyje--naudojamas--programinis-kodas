import <iostream>;
using std::cout; 
using std::cin; 
using std::endl;
//
int main() {
	// Duomenys
	double x[100]; // masyvo skelbimas ir apibrėžimas 100-ui ląstelių
	size_t n;     // masyvo elementų tikrasis skaičius
	// Rezultatas: elementų suma
	double s = 0.;
	/*   Duomenų įvedimas, kontrolinis spausdinimas ir skaičiavimas – tame pat cikle   */
	cout << "Iveskite masyvo elementu skaiciu\n";
	cin >> n;
	cout << "Masyvo elementu skaicius yra  " << n << endl << endl;
	cout << "Iveskite masyvo elementus:\n";
	for (size_t i = 0; i < n; i++) {
		cout << i + 1 << " -aji masyvo elementa  ";
		cin >> x[i];
		cout << "Ivestas " << i + 1 << "  elementas " << x[i] << endl;
		s += x[i];
	}
	// Rezultatų spausdinimas
	cout << endl << "Rezultatas: elementu suma yra " << s << endl;
	//
}
