import <iostream>;
import <memory>;  // „protingai“ rodyklei
//
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
	void showDistance(const char[]) const;
	void addDistances1(const Distance&, const Distance&);
	Distance addDistances2(const Distance&);
	//
};
//
//
int main() {
	//
	Distance d1(1, 2.3); // objektas statinėje atmintyje
	d1.showDistance("d1");
	//
	Distance* d2 = new Distance; // objektas dinaminėje atmintyje;
		         // kviečiamas konstruktorius be argumentų
	//
	d2->getDistance();     // metodo kvietimo sintaksė
	(*d2).showDistance("d2");  // alternatyvi kvietimo sintaksė
	delete d2; // prireikus dinaminę atmintį galima išlaisvinti
	//
	Distance* d3 = new Distance(4, 5.6); // taip galima kviesti konstruktorių su argumentais
	d3->showDistance("d3");
	delete d3;
	//
	auto d4{ std::make_unique<Distance>(7, 8.9) }; // objektas kuriamas "protinga" rodykle
	d4->showDistance("d4");
	// delete d4; // dabar atmintį tvarko pati rodyklė; 
                         // delete nebereikalingas
}
//
//
void Distance::getDistance() {
	std::cout << "Iveskite pedas ir colius\n";
	std::cin >> feet >> inches;
}
void Distance::showDistance(const char c[]) const {
	std::cout << c << "  " << "Pedos: " << feet <<
		              "  coliai: " << inches << std::endl;
}
void Distance::addDistances1(const Distance& d1, const Distance& d2) {
	inches = d1.inches + d2.inches;
	feet = d1.feet + d2.feet;
	if (inches >= 12.) {
		inches -= 12.;
		feet++;
	}
}
Distance Distance::addDistances2(const Distance& d) {
	int ft = feet + d.feet;
	double in = inches + d.inches;
	if (in >= 12.) {
		in -= 12.;
		ft++;
	}
	return Distance(ft, in);
}
