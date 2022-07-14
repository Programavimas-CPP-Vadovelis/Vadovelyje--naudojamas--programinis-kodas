import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
double& lowest(double[], size_t n);  // prototipas
//
int main() {
	size_t n;	          // masyvo matas
	double x[100];    // pradinis masyvas
		   // Įvedimas	
	cout << "Iveskite masyvo mata:   ";
	cin >> n;
	cout << "n = " << n << endl;
	cout << "Iveskite \n";
	for (size_t i = 0; i < n; i++) {
		cout << "masyvo elementa " << i + 1 << " :   ";
		cin >> x[i];
	}
	//
	cout << "\nIvestas masyvas:\n";
	for (size_t i = 0; i < n; i++)
		cout << format("{:10.3f}", x[i]);
	cout << endl;
	//
	//                Masyvo keitimas
	//
	lowest(x, n) = 100.; // kreipinys į funkciją – kairėje prieskyros operatoriaus pusėje!;
	lowest(x, n) = 200.; // šis kreipinys ir mažiausias masyvo elementas faktiškai yra tas pat
//
//	      Rezultatų išvedimas
//
	cout << "\nRezultatai: pakeistas masyvas\n";
	for (size_t i = 0; i < n; i++)
		cout << format("{:10.3f}", x[i]);
	cout << endl;
	//
}
//
double& lowest(double x[], size_t n) {
	//
	// Argumentai: x – duomenys, pradinis masyvas
	//	           n – duomenys, masyvo matas 
	//Grąžinama reikšmė: nuoroda į mažiausią elementą
	//
	size_t imin = 0;  // prielaida: mažiausio elemento indekso vertė
	for (size_t i = 1; i < n; i++)
		if (x[imin] > x[i])
			imin = i;
	return x[imin]; // grąžinama nuoroda į mažiausią elementą: imin-tojo elemento adresas
}
