import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Distance {
private:
	int feet;
	double inches;
	//
public:
	Distance() : feet(0), inches(0.) { }
	Distance(int ft, double in) : feet(ft), inches(in) { }
	// 
	~Distance() { }
	//
	void getDistance();
	void showDistance() const;  // konstantinis metodas
	void addDistances1(const Distance&, const Distance&); // konstantiniai adresu perduodami argumentai
	Distance addDistances2(const Distance&);                   
	//
};

//
//
int main() {
	//
	Distance d1, d2;
	const Distance d3(1, 2.3);  // konstantinis objektas
	//d3.getDistance( );        // klaida: d3 keisti negalima
	//d3 = d1;                  // klaida: d3 keisti negalima
	//
	d2.getDistance();
	//
	cout << "d1: ";    d1.showDistance();
	cout << "d2: ";    d2.showDistance();
	cout << "d3: ";    d3.showDistance();
	//
	d1 = d2.addDistances2(d3);
	//
	cout << "d1: ";    d1.showDistance();
	//
	cout << endl;
}
//
//   Metodų realizacijos
//
void Distance::getDistance() {
	cout << "Iveskite pedas ir colius\n";
	cin >> feet >> inches;
}
void Distance::showDistance() const {  // konstantinis metodas feet++; klaida: metodas konstantinis – laukų keisti negali
	cout << "Pedos: " << feet << "  coliai: " << inches << endl;
}
void Distance::addDistances1(const Distance& d1, const Distance& d2) { // 
				// konstantiniai argumentai
	//d1.feet++;        // klaida: argumentas-objektas d1 konstantinis
	//d2.inches+=10.;   // klaida: argumentas-objektas d2 konstantinis
	inches = d1.inches + d2.inches;
	feet = d1.feet + d2.feet;
	if (inches >= 12.) {
		inches -= 12.;
		feet++;
	}
}
Distance Distance::addDistances2(const Distance& d) { // konstantiniai argumentai d.feet++; klaida: argumentas-objektas d konstantinis
	int ft = feet + d.feet;
	double in = inches + d.inches;
	if (in >= 12.) {
		in -= 12.;
		ft++;
	}
	return Distance(ft, in);
}
