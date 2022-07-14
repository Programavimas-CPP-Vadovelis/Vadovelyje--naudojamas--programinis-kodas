import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class C {	       
private:           
	int data1;
	double data2;
public:
	// konstruktoriai be argumentų ir su argumentais
	C( ) : data1( 0 ), data2( 0. ) { }
	C( int d1, double d2 ) : data1( d1 ), data2( d2 ) { }
	// destruktorius
	~C() { };
	// metodai
	void setData(int d1, double d2) {
		data1 = d1;
		data2 = d2;
	}
	void getData() {
		cout << "Iveskite klases laukus\n";
		cin >> data1 >> data2;
	}
	void showData() {
		cout << "Klases laukai: " << data1
			<< "   " << data2 << endl;
	}
};                    
//
int main() {
	C c1, c2, c3{ 1, 2.3 }; // c1 ir c2 formuojami konstruktoriumi                 
			// be argumentų, c3 – su argumentais
	c1.setData( 4, 5.6 );  
	c2.getData();
	//
	std::cout << endl;
	std::cout << "Objektas c1\n";   c1.showData();
	std::cout << "Objektas c2\n";   c2.showData();
	std::cout << "Objektas c3\n";   c3.showData();
	//
}
