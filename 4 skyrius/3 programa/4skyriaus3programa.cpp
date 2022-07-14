import <iostream>;
using std::cout; 
using std::cin; 
using std::endl;
//
int main() {
	//     Duomenys, įvedimas
	int x[100];
	size_t n;
	cout << "Iveskite masyvo elementu skaiciu\n";
	cin >> n;
	cout << "Masyvo elementu skaicius yra  " << n << endl << endl;
	cout << "Iveskite masyvo elementus:\n";
	for (size_t i = 0; i < n; i++) {
		cout << i + 1 << " -aji masyvo elementa  ";
		cin >> x[i];
		cout << "Ivestas " << i + 1 << "  elementas " << x[i] << endl;
	}
	// Paieška
	int max = x[0];  // prielaida didžiausiam elementui
	size_t imax = 0;    // jei pirmasis elementas toks ir bus – jo vieta yra 0
	int min = x[0];  // prielaidos mažiausiam elementui ...
	size_t imin = 0;    // ir jo vietai masyve
	for (size_t i = 1; i < n; i++ ) { // galime ciklą pradėti nuo antrojo elemento
		if (x[i] > max) {
	max = x[i];
	imax = i;
		}
		if (x[i] < min) {
	  min = x[i];
	  imin = i;
		}
}
	// Rezultatų spausdinimas
	cout << "\nRezultatai\n";
	cout << "Didziausias elementas yra " << max << ", jo vieta yra " << imax + 1 <<
		 endl;
	cout << "Maziausias elementas yra " << min << ", jo vieta yra " << imin + 1 <<
endl;
	//
}
