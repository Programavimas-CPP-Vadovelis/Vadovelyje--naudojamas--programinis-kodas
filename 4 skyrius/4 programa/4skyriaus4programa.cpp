import <iostream>;
import <iomanip>;
using namespace std;
//
int main() {
	double x[10][10];     // pradinis masyvas
	size_t n, m;             // tikrieji eilučių ir stulpelių skaičiai
	double v[10];	  // rezultatams – eilučių vidurkiams 
	//
	// Duomenų įvedimas ir kontrolė
	//
	cout << "Iveskite masyvo matus\n";
	cin >> n >> m;
	cout << "Masyvo matai yra " << setw(5) << n << setw(5) << m << endl;
	cout << "Iveskite masyvo elementus eilutemis:\n";
	for (size_t i = 0; i < n; i++) {
	for (size_t j = 0; j < m; j++) {
		cout << "Iveskite elementa " << i + 1 << "  " << j + 1 << " : ";
		cin >> x[i][j];
	}
	}
	cout << "\n             Masyvas\n";
	for (size_t i = 0; i < n; i++) {
	cout << "     Eilute  " << i + 1 << endl;
	for (size_t j = 0; j < m; j++)
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint)
		     << setprecision(2) << setw(12) << x[i][j];
	cout << endl; // t.y. kitą masyvo eilutę spausdinsime į kitą eilutę
	}
	//
// Skaičiavimas
	// 
	for (size_t i = 0; i < n; i++) {
	v[i] = 0.;  // i-osios eilutės elementų suma. Vėliau čia bus vidurkis
	for (size_t j = 0; j < m; j++)   v[i] += x[i][j];
	v[i] /= m; 
	}
//	
// Rezultatų išvedimas
//
	cout << "\n      Rezultatai: eiluciu vidurkiai\n";
	for (size_t i = 0; i < n; i++)
	cout << "Eilutes "<<i+1<<" vidurkis yra" <<
		setiosflags(ios::fixed) << setiosflags(ios::showpoint) <<
		setprecision(2) << setw(12) << v[i] << endl;
	//
}
