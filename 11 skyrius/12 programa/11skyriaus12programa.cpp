import <iostream>;
using std::cout;
using std::endl;
//
class B;  // pastaba
//
class A {
private:
	int data;
public:
	A() : data(10) { }
	friend int friendlyfunc(A, B); // prototipas su "friend"
};
//
class B {
private:
	int data;
public:
	B() : data(20) { }
	friend int friendlyfunc(A, B); // prototipas su "friend"
};
//
int friendlyfunc(A a, B b) {    // išorinė funkcija prieš main: kad būtų matoma 
	return (a.data + b.data);
}
//
int main() {
	A a;
	B b;
	//
	cout << "Suma yra: " << friendlyfunc(a, b) << endl;
	//
}
