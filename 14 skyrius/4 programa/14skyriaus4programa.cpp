import <iostream>;
using std::cout;
using std::endl;
//
class Base {
public:
	~Base() {
		cout << "Base destruktorius\n";
	}
	virtual void show() {
		cout << "\nBase\n";
	}
};
//
class Derived11 : public Base {
public:
	~Derived11() {
		cout << "Derived11 destruktorius\n";
	}
	void show() override {
		cout << "\nDerived11\n";
	}
};
// 
class Derived12 : public Base {
public:
	~Derived12() {
		cout << "Derived12 destruktorius\n";
	}
	void show() override {
		cout << "\nDerived12\n";
	}
};
//
class Derived21 : public Derived11 {
public:
	~Derived21() {
		cout << "Derived21 destruktorius\n";
	}
	void show() override {
		cout << "\nDerived21\n";
	}
};
//
int main() {
	//
	Base* p;
	//
	p = new Derived11();
	p->show();
	cout << "Naikinamas Derived11 objektas:\n";
	delete p;
	//
	p = new Derived12();
	p->show();
	cout << "Naikinamas Derived12 objektas:\n";
	delete p;
	//
	p = new Derived21();
	p->show();
	cout << "Naikinamas Derived21 objektas:\n";
	delete p;
	//
}
