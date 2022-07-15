import <iostream>;
//
class Base {
public:
	void show() {
		std::cout << "Base\n";
	}
};
//
class Derived1 : public Base {
public:
	void show() {
		std::cout << "Derived1\n";
	}
};
// 
class Derived2 : public Base {
public:
	void show() {
		std::cout << "Derived2\n";
	}
};
//
int main() {
	Derived1 d1;
	Derived2 d2;
	Base* p;
	//
	p = &d1;
	p->show();
	p = &d2;
	p->show();
	//
}
