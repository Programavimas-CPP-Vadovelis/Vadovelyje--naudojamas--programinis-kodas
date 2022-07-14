import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
void avg(const int[][10], double[], double& vmax, size_t& imax, size_t n, size_t m);  
//
int main() {
size_t  n, m;	  // tikrieji masyvo matai
int x[10][10];      // pradinis masyvas
double v[10], vmax; // vidurkių masyvas ir didžiausias vidurkis
size_t imax;           // eilutės, turinčios didžiausią vidurkį, indeksas
	// Įvedimas	
cout << "Iveskite masyvo matus n , m: ";
cin >> n >> m;
cout << "nxm = " << n << " x " << m << endl;
cout << "Iveskite \n";
for (size_t i = 0; i < n; i++) {
	for (size_t j = 0; j < m; j++) {
		cout << "elementa " << i + 1 << "  " << j + 1 << " : ";
		cin >> x[i][j];
	}
}
//
cout << "\nIvestas masyvas:\n";
for (size_t i = 0; i < n; i++) {
	cout << format("Eilute {}\n", i + 1);
	for (size_t j = 0; j < m; j++)
		cout << format("{:5}", x[i][j]);
	cout << endl;
}
//
//        Skaičiavimas
//
avg(x, v, vmax, imax, n, m);
//
//	 Rezultatų išvedimas
//
cout << "\nRezultatai\n";
for (size_t i = 0; i < n; i++)
	cout << format("{} eilutes vidurkis {:#10.5g}\n", i + 1, v[i]);
cout << format("Didziausia vidurki {:10.5} turi eilute {}\n", vmax, imax+1);
//
}
//
void avg(const int a[][10], double b[], double& v, size_t& max, size_t n, size_t m) {
	//
	// Argumentai: a – duomenys, pradinis masyvas
	//	  b – rezultatas, eilučių vidurkių masyvas
	//	  v – rezultatas, didžiausias vidurkis
	//	  max – rezultatas, eilutės su didžiausiu vidurkiu indeksas
	//	  n,m – duomenys, tikrieji masyvu matai
	//
	for (size_t i = 0; i < n; i++) {
		b[i] = 0.;
		for (size_t j = 0; j < m; j++) {
			b[i] += a[i][j];
		}
		b[i] /= m;
	}
	//
	v = b[0];
	max = 0;
	for (size_t i = 1; i < n; i++) {
		if (v < b[i]) {
			v = b[i];
			max = i;
		}
	}
	//
}
