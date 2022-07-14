import <iostream>;
using std::cout; 
using std::cin; 
using std::endl;
//
int main() {
	//     Duomenys
	double x[100];
	size_t n;
	size_t k = 0;  //  teigiamų elementų kiekis            
	double s = 0.; // teigiamų elementų suma
	//          
	cout << "Iveskite masyvo elementu skaiciu\n";
	cin >> n;
	cout << "Masyvo elementu skaicius yra  " << n << endl << endl;
	cout << "Iveskite masyvo elementus:\n";
	for (size_t i = 0; i < n; i++) {
		cout << i + 1 << " -aji masyvo elementa  ";
		cin >> x[i];
		cout << "Ivestas " << i + 1 << "  elementas " << x[i] << endl;
		if (x[i] > 0.) {
			k++;
			s += x[i];
		}
	}
	// Vidurkio skaičiavimas ir spausdinimas
	cout << "\nRezultatai\n";
	if (k > 0)  cout << "Teigiamu elementu vidurkis yra  " << s / k << endl;
	else cout << "Teigiamu elementu masyve nera\n";
	//
}
