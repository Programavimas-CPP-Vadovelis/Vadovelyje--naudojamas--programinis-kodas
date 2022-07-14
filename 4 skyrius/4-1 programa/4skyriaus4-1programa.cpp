import <iostream>;
import <format>;
using namespace std;
//
int main() {
double x[10][10];     
size_t n, m;              
double v[10];	       
//
cout << "Iveskite masyvo matus\n";
cin >> n >> m;
//
cout << format("Masyvo matai yra {:5}{:5}\n", n, m);
//
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
	//
	cout << format("{:12.2f}   ", x[i][j]);
	//
cout << endl; 
}
	//
for (size_t i = 0; i < n; i++) {
v[i] = 0.;  
for (size_t j = 0; j < m; j++)   v[i] += x[i][j];
v[i] /= m;
}
	// 
cout << "\n      Rezultatai: eiluciu vidurkiai\n";
for (size_t i = 0; i < n; i++)
//
cout << format("Eilutes {} vidurkis yra {:+#12.2f}\n", i+1, v[i]);
//
}
