import <iostream>;
import <typeinfo>;
using std::cout;
using std::endl;
//
class Base {
protected:
	int b;
public:
	Base() : b(0) { }
	Base(int b) { this->b = b; }
	virtual void fictitious() { }
	void show() {
		cout << "Base: b= " << b << endl;
	}
};
//
class Derived : public Base {
private:
	int d;
public:
	Derived(int b, int d) { this->d = d; this->b = b; }
	void show() {
		cout << "Derived: b= " << b << " d= " << d << endl;
	}
};
//
int main() {
	Base* pBase = new Base(10);
	pBase->show();
	//
	Derived* pDerived = new Derived(21, 22);
	//
	pBase = dynamic_cast<Base*>(pDerived);  // 1 pastaba
	pBase->show();
	//
	pBase = new Derived(31, 32);  // 2 pastaba
	pBase->show();
	//
	//pDerived = dynamic_cast<Derived*>( pBase );  // 3 pastaba
	pDerived->show();
	//
	pBase = pDerived;
	pBase->show();
	//
	cout << endl;
	cout << "pBase-> " << typeid(*pBase).name() << endl;
	cout << "pDerived-> " << typeid(*pDerived).name() << endl;
	//
}
