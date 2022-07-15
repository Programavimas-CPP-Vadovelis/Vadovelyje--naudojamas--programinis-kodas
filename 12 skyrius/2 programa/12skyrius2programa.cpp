import <iostream>;
using std::cout;
using std::endl;
//
class Counter {
private:
	unsigned int count;
public:
	Counter() : count{ } { }
	Counter(unsigned int c) : count{ c } { }
	//
	~Counter() { }
	//
	unsigned int getCount() {
		return count;
	}
	Counter operator++() {
		return Counter(++count);
	}
	Counter operator++(int) { // int argumentų sąraše  
		return Counter(count++); 
	}
};
//
int main() {
	Counter c1, c2;
	//
	cout << "c1: " << c1.getCount() << endl;
	cout << "c2: " << c2.getCount() << endl;
	//
	++c1; // void metodą taip kviesti galima
	c2 = ++c1;
	c2 = c1++;
	//
	cout << "c1: " << c1.getCount() << endl;
	cout << "c2: " << c2.getCount() << endl;
	//
}
