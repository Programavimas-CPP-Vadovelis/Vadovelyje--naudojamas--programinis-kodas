import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class C {	       // klasės skelbimas
private:           // klasės laukai uždari
	int data1;
	double data2;
public:            // klasės metodai atviri
	void setData(int d1, double d2) {
		data1 = d1;
		data2 = d2;
	}
	void getData() {
		cout << "Iveskite klases laukus\n";
		cin >> data1 >> data2;
	}
	void showData() {
		cout << "Klases laukai: " << data1
			<< "   " << data2 << endl;
	}
};                    // kabliataškis!
//
int main() {
	C c1, c2, c3;         // objektų skelbimas
	//
	c1.setData(1, 2.3);  // metodai kviečiami konkretiems objektams
	c2.getData();
	//
	std::cout << endl;
	std::cout << "Objektas c1\n";   c1.showData();
	std::cout << "Objektas c2\n";   c2.showData();
	std::cout << "Objektas c3\n";   c3.showData();
	//
}
