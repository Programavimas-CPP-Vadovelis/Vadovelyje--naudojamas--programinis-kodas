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
	// Metodų prototipai
	//
	void getDistance();
	void showDistance();
	void addDistances1(Distance, Distance);
	Distance addDistances2(Distance);
	//
};
//
//
int main() {
	//
	Distance d1, d2;
	Distance d3(1, 2.3);
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
//   Metodų realizacijos – už klasės ir funkcijų ribų
//
void Distance::getDistance() {
	cout << "Iveskite pedas ir colius\n";
	cin >> feet >> inches;
}
void Distance::showDistance() {
	cout << "Pedos: " << feet << "  coliai: " << inches << endl;
}
void Distance::addDistances1(Distance d1, Distance d2) {
	inches = d1.inches + d2.inches;
	feet = d1.feet + d2.feet;
	if (inches >= 12.) {
		inches -= 12.;
		feet++;
	}
}
Distance Distance::addDistances2(Distance d) {
	int ft = feet + d.feet;
	double in = inches + d.inches;
	if (in >= 12.) {
		in -= 12.;
		ft++;
	}
	return Distance(ft, in);
}
