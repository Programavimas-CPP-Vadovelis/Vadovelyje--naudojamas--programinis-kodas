import <iostream>;
using std::cout;
using std::endl;
//
class A {
private:
	int privateData;
protected:
	int protectedData;
public:
	int publicData;
	//
	A() : privateData(1), protectedData(2), publicData(3) { }
	//
	void ma() {
		cout << "\nA metodas: "
			<< privateData
			<< protectedData
			<< publicData
			<< endl;
	}
};
//
class B : public A {   // bendrasis paveldimumas 
public:
	void mb() {
		cout << "\nB metodas: "
			//<<privateData  // klaida
			<< protectedData
			<< publicData
			<< endl;
	}
};
//

class C : private A {    // dalinis paveldimumas
public:
	void mc() {
		cout << "\nC metodas: "
			//<<privateData  // klaida
			<< protectedData
			<< publicData
			<< endl;
	}
};
//
int main() {
	A a;  B b; C c;	
	//
	cout << "\nmain: A  objektas  "
		// <<a.privateData    // klaida
		// <<a.protectedData  // klaida
		<< a.publicData
		<< endl;
	a.ma();
	//
	cout << "\nmain: B  objektas  "
		// <<b.privateData    // klaida
		// <<b.protectedData  // klaida
		<< b.publicData
		<< endl;
	b.ma();
	b.mb();
	//
	cout << "\nmain: C  objektas  "
		// <<c.privateData      // klaida
	    	// <<c.protectedData    // klaida
	    	//<<c.publicData        // klaida
		<< endl;
	//c.ma( );   // klaida    
	c.mc();
	//
}
