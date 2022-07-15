import <iostream>;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Distance {
private:
	int feet;
	double inches;
public:
	class Range {
	public:  // public!
		string source; // kur kilo klaida
		double value;  // klaidingas colių skaičius
		//
		Range(string s, double v) { // konstruktorius
			source = s;
			value = v;
		}
	};
	//
	Distance() { feet = 0; inches = 0.; }
	Distance(int ft, double in) {
		if (in >= 12.)
			throw Range("Konstruktorius", in);
		feet = ft;
		inches = in;
	}
	~Distance() {
		cout << "Vykdomas destruktorius\n";
	}
	//
	void getDistance() {
		cout << "Iveskite pedas ir colius\n";
		cin >> feet >> inches;
		if (inches >= 12.)
			throw Range("Metodas getDistance", inches);
	}
	void showDistance() {
		cout << "Pedos ir coliai: " << feet << "  " << inches << endl;
	}
};
//
int main() {
	try {
		Distance d1(10, 10.);
		Distance d2;
		//
		d2.getDistance();
		//
		cout << "d1:  ";
		d1.showDistance();
		cout << "d2: ";
		d2.showDistance();
	}
	catch (Distance::Range r) {  // skelbiamas klaidos objektas r
cout << "Ivyko klaida\n";
cout << "   Klaidos saltinis: " << r.source << endl;   // spausdinama
cout << "   Ivestas coliu skaicius: "<<r.value<<endl;  // informacija
}					// iš objekto r			                                           
	//
}
