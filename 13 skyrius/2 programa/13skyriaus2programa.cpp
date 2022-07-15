import <iostream>;
//
class Counter {
protected:                                                // 1 pastaba
	unsigned int count;
public:
	Counter() : count(0) { }       // konstruktorius
	Counter(int c) : count(c) { }  // konstruktorius
	//
	unsigned int returnCount() {
		return count;
	}
	Counter operator++() {  // „++“ perkrovimas
		return Counter(++count);
	}
};
//
class CounterDown : public Counter {                     // 2 pastaba
public:
	Counter operator--() {  // „- -“ perkrovimas
		return Counter(--count);
	}
};
//
int main() {
	Counter c1;
	CounterDown c2;                                       // 3 pastaba
	//
	std::cout << "c1: " << c1.returnCount() << std::endl;
	std::cout << "c2: " << c2.returnCount() << std::endl; // 4 pastaba
	//
	++c2; ++c2; ++c2;		                                  // 4 pastaba	
	std::cout << "c2: " << c2.returnCount() << std::endl;
	//
	--c2; --c2;
	std::cout << "c2: " << c2.returnCount() << std::endl;
	//
	++c1;
	// --c1;                                              // 5 pastaba
	std::cout << "c1: " << c1.returnCount() << std::endl;
	//
}
