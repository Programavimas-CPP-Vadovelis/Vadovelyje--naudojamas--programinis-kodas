import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
double F_to_C(double);
//
int main() {
	double f;   // Farenheito temperatūra
	char s;     // dialogo kintamasis

	do {
		cout << "Iveskite temperatura Farenheito laipsniais  ";
		cin >> f;
		cout << "Farenheito temperatura: " << f
<< "  Celsijaus temperatura: " << F_to_C(f) << endl;
		cout << "Ar testi skaiciavima? t/n\n";
		cin >> s;
	} while (s != 'n');
	//
}
//	
double F_to_C(double ft) {
	// Argumentai: ft – Farenheito temperatūra
	// Grąžinama reikšmė - Celsijaus temperatūra 
	return  ((ft - 32.) * 5. / 9.);
}
