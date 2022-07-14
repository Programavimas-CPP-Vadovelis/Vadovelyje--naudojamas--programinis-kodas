import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
double F_to_C(double);
//
int main() {
	//
	double f, c;   // Farenheito ir Celsijaus temperatūros
	char s;        // dialogo kintamasis
	//
	do {
		cout << "Iveskite temperatura Farenheito laipsniais   ";
		cin >> f;
		cout << "Farenheito temperatura: " << f;
		//
		c = F_to_C(f);
		//
		cout << "  Celsijaus temperatura: " << c << endl;
		cout << "Ar testi skaiciavima? t/n\n";
		cin >> s;
	} while (s != 'n');
	//
}
//	
double F_to_C(double ft) {
	// Argumentai: ft – Farenheito temperatūra
	// Grąžinama reikšmė - Celsijaus temperatūra 
	double ct = (ft - 32.) * 5. / 9.;
	return ct;
}
