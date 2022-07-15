import <iostream>;
using std::cout;
using std::endl;
//
template <typename T> 
class Base {
protected:
	T baseField = 1;
public:
	void baseMethod() {
		cout << "Base method: field = " << baseField << endl; 
	}
};
//
template <typename T>
class Derived: public Base<T>{
public:
	void deriveMethod() {
		cout << "Derive method\n";
		//baseMethod();
		Base<T>::baseMethod();
	}
};

int main() {
	//
	Derived<int> d;
	d.deriveMethod();
	//
}
