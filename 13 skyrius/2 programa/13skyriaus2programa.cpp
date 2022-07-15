import <iostream>;
using std::cout;
using std::endl;
//
class Counter {
protected:
	unsigned int count;
public:
	Counter() : count(0) {
		cout << "Bazines klases konstruktorius be argumentu\n";
	}
	Counter(int c) : count(c) {
		cout << "Bazines klases konstruktorius su argumentais\n";
	}
	//
	~Counter() { }
	//
	unsigned int returnCount() {
		return count;
	}
	Counter operator++() {
		return Counter(++count);
	}
};
//
class CounterDown : public Counter {
public:
	CounterDown() : Counter() {          // 1 pastaba
		cout << "Isvestines klases konstruktorius be argumentu\n";
	}
	CounterDown(int c) : Counter(c) {   // 2 pastaba
		cout << "Isvestines klases konstruktorius su argumentais\n";
	}
	//
	~CounterDown() { }
	//
	CounterDown operator--() {
		return CounterDown(--count);  // 3 pastaba
	}
};
//
int main() {
	CounterDown c1;
	CounterDown c2{ 10 };
	//
	cout << "c1: " << c1.returnCount() << endl;
	cout << "c2: " << c2.returnCount() << endl;
	//
	++c2; ++c2;
	//
	CounterDown c3 = --c2;   // 4 pastaba
	cout << "c2: " << c2.returnCount() << endl;
	cout << "c3: " << c3.returnCount() << endl;
	//
}
