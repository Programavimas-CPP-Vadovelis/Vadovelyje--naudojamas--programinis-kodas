import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
const float MTF = 3.28083f; // daugiklis „metras -> pėdos“ (dešimtainės)
//
class Distance {
private:
	int feet;
	double inches;
public:
	Distance(int f, double in) : feet(f), inches(in) { }
	//
	~Distance() { }
	//
	void getDistance() {
		cout << "Iveskite pedas ir colius:\n";
		cin >> feet >> inches;
	}
	void showDistance() const {
		cout << format("Pedos  {} coliai {:12.6f}\n", feet, inches );
	}
	//
	Distance(double m) {   // pertvarkantysis konstruktorius
		double metricFeet = (double)MTF * m;
		feet = int(metricFeet);
		inches = (metricFeet - feet) * 12.;
	}
	operator double() { // pertvarkymo funkcija; pradedama tiesiog „operator“
		double partFeet = inches / 12.; 
		double fullFeet = partFeet + static_cast<double>(feet);
		return fullFeet / static_cast<double>(MTF);
	}
};
//
int main() {
	double m1, m2;
	//
	Distance d1 = 1.23;   // kviečiamas pertvarkantysis konstruktorius
	cout << "d1=1.23 m pedomis:\n"; d1.showDistance();
	//
	Distance d2(4.56); // kviečiamas pertvarkantysis konstruktorius
	cout << "d2=4.56 m pedomis:\n"; d2.showDistance();
	//
	cout << endl;
	m1 = static_cast<double>(d1);   // kviečiama pertvarkymo funkcija  
	cout << format( "d1 metrais: {:12.6f}\n", m1 );
	m2 = d2;		        // kviečiama pertvarkymo funkcija
	cout << format( "d2 metrais: {:12.6f}\n", m2 );
	//
} 
