import <iostream>;
using std::cout;
using std::endl;
//
class Counter {
protected:
	unsigned int count;
public:
	Counter() : count(0) { }
	Counter(int c) : count(c) { }
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
	CounterDown() : Counter() { }
	CounterDown(int c) : Counter(c) { }
	~CounterDown() { }
	//
	CounterDown(Counter c) {  // pertvarkantysis konstruktorius
		this->count = c.returnCount(); // iš Counter į CounterDown
	}
	//
	CounterDown operator--() {
		return CounterDown(--count);
		//return Counter( --count ); // dabar galimas ir toks reikšmės grąžinimas: neišreikštai būtų kviečiamas pertvarkantysis konstruktorius
	}
};
//
int main() {
	CounterDown c1, c2{ 10 };
	//
	++c2; // gerai: grąžinamas Counter objektas, bet rodyklė į jį nenutaikyta
	c1 = c2; // gerai: abu objektai CounterDown formato
	//
	CounterDown c3 = --c1; // gerai: metodas „--“ grąžina CounterDown formato objektą					  
	CounterDown c4 = ++c1; // neišreikštai kviečiamas pertvarkantysis konstruktorius: „++“ grąžina Counter objektą; jį reikia pertvarkyti į CounterDown formatą
	Counter c5 = c1;       // neišreikštinis pertvarkymas iš CounterDown į bazinį Counter formatą: visada leidžiamas
	cout << "c1: " << c1.returnCount() << endl;
	cout << "c2: " << c2.returnCount() << endl;
	cout << "c3: " << c3.returnCount() << endl;
	cout << "c4: " << c4.returnCount() << endl;
	cout << "c5: " << c5.returnCount() << endl;
	//
}
