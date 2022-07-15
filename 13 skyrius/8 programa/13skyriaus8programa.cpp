import <iostream>;
//
class A {
public:
	void m() {
		std::cout << "A metodas\n";
	}
};
//
class B {
public:
	void m() {
		std::cout << "B metodas\n";
	}
};
//
class C : public A, public B { };
// 
int main() {
	C c;
	//c.m( ); // klaida! Neaišku, kurį metodą kviesti
	c.A::m(); // gerai: kviečiamas iš A paveldėtas metodas
	c.B::m(); // gerai: kviečiamas iš B paveldėtas metodas
	//
}
