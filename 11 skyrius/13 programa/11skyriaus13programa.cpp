import <iostream>;
using std::cout;
using std::endl;
//
class A {
private:
	int data;
public:
	A() : data(10) { }
	friend class B;   // draugiškos klasės skelbimas
};
//
class B {
public:
	void m(A a) {
		cout << "Data: " << a.data << endl;  // yra prieiga
	}
};
//
int main() {
	A a;
	B b;
	//
	b.m(a);
	//
}
