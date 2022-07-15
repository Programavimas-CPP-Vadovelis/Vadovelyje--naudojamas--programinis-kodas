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
	Distance() { feet = 0; inches = 0.; }
	Distance(int ft, double in) {
		if (in >= 12.)
			throw "Klaida konstruktoriuje\n";
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
			throw "Klaida ivesties metode\n";
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
	catch (const char* Message) {  // gaudomas klaidos objektas-const char* 
		cout << Message << endl; // char* atminties turinys
	}
//
}
