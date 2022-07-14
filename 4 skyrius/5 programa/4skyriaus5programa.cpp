import <vector>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::format;
//
int main() {
	//     Duomenys, įvedimas, dinaminė atmintis
	size_t n;
	cout << "Iveskite masyvo elementu skaiciu\n";
	cin >> n;
	cout << "Masyvo elementu skaicius yra  " << n << endl << endl;
	vector<double> x(n); //visi elementai = 0.
	cout << "Iveskite masyvo elementus:\n";
	for (size_t i = 0; i < x.size(); i++) {
		cout << i + 1 << " -aji masyvo elementa  ";
		cin >> x.at(i);
		cout << "Ivestas " << i + 1 << "  elementas " << x.at(i) << endl;
	}
	// 
	double max = x.at(0);  
	size_t imax = 1; // matematinis indeksas      
	double min = x.at(0);  
	size_t imin = 1; // matematinis indeksas

	size_t i{};
	for (auto xi: x ) {
		++i;
		if (xi > max) {
			max = xi;
			imax = i;
		}
		if (xi < min) {
			min = xi;
			imin = i;
		}
	}
	// 
cout << "\nRezultatai\n";
cout << format("Max elementas yra  {:#10.5g} jo vieta yra {}\n", max, imax);
cout << format("Min elementas yra  {:#10.5g} jo vieta yra {}\n", min, imin);	
	//
}
