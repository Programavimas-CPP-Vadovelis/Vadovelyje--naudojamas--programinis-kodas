import <iostream>;
//
class A {
public:
	void m() {
		std::cout << "A metodas\n";
	}
};
//
class A1 : public A { };
//
class A2 : public A { };
//
class B : public A1, public A2 { };
//
int main() {
	B b;
	//b.m( ); // klaida! Neaišku, kurį metodą kviesti: A1 ir A2 turi m( ) kopijas, paveldėtas iš A
	b.A::m();  // gerai: kviečiamas A metodas
	b.A1::m(); // gerai: kviečiama metodo kopija iš A1
	b.A2::m(); // gerai: kviečiama metodo kopija iš A2
	//
}
