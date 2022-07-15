import <iostream>;
using std::cout;
using std::endl;
//
class Counter {
private:
	unsigned int count;
public:
	Counter() : count{ } { }
	//
	~Counter() { }
	//
	unsigned int getCount() {
		return count;
	}
	void operator++() {   // operacijos „++“ perkrovimas
		++count;
	}
};
//
int main() {
	Counter c1, c2;
	//
	cout << "c1: " << c1.getCount() << endl;
	cout << "c2: " << c2.getCount() << endl;
	//
	++c1;  // kviečiamas metodas „operator++“
	++c2;  // kviečiamas metodas „operator++“
	++c2;  // kviečiamas metodas „operator++“
	//
	cout << "c1: " << c1.getCount() << endl;
	cout << "c2: " << c2.getCount() << endl;
	//
}
