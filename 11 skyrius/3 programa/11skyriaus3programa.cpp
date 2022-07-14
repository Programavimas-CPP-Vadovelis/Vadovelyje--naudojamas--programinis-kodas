import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Counter {
private:
	int count;
public:
	Counter() : count(0) {
		cout << "Vykdomas metodas-konstruktorius\n";
	}
	~Counter() {
		cout << "Vykdomas metodas-destruktorius\n";
	}
	void increase() {
		count++;
	}
	int returnCount() {
		return count;
	}
};
//
int main() {
	//
	Counter c1, c2;
	//
	cout << "c1: " << c1.returnCount() << endl;
	cout << "c2: " << c2.returnCount() << endl;
	c1.increase();
	c1.increase();
	c2.increase();
	cout << "c1: " << c1.returnCount() << endl;
	cout << "c2: " << c2.returnCount() << endl;
	//
}
