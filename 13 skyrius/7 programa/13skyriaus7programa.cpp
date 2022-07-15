import <iostream>;
using std::cin;
using std::cout;
using std::endl;
using std::string;
//
class Type {
protected:
	string dimensions;
	string grade;
public:
	Type() : dimensions("N/A"), grade("N/A") { }
	Type(string d, string g) : dimensions(d), grade(g) { }
	~Type() { }
	//
	void getType() {
		cout << "Enter dimensions and grade: ";
		cin >> dimensions >> grade;
	}
	void showType() {
		cout << "Dimensions: " << dimensions << " Grade: " << grade
		     << endl;
	}
};
//
class Distance {
protected:
	int feet;
	double inches;
public:
	Distance() : feet(0), inches(0.) { }
	Distance(int ft, double in) : feet(ft), inches(in) { }
	~Distance() { }
	//
	void getDistance() {
		cout << "Enter feet and inches: ";
		cin >> feet >> inches;
	}
	void showDistance() {
		cout << "Length: " << feet << " - " << inches << endl;
	}
};
//
class Lumber : public Type, public Distance {
private:
	int quantity;
	double price;
public:
	Lumber() : Type(), Distance(), quantity(0), price(0.) { }       // 1
	Lumber(string d, string g, int ft, double in, int q, double p) :
	       Type(d, g), Distance(ft, in), quantity(q), price(p) { }  // 1
	~Lumber() { }
	//
	void getLumber() {
		Type::getType();	// 2
		Distance::getDistance();
		cout << "Enter quantity and price: ";
		cin >> quantity >> price;
	}
	void showLumber() {
		Type::showType();  // 2
		Distance::showDistance();
		cout << "Quantity and price: " << quantity << "  " << price
		     << endl;
	}
};
//
int main() {
	Lumber p1;
	Lumber p2("2x4", "A", 8, 0., 100, 50.00);
	//
	p1.getLumber();
	p1.showLumber();
//
	p2.showLumber();
	//
}
