import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Distance {
private:
static size_t count;  // statinis objektų skaitiklis
int feet;
double inches;
//
public:
Distance() : feet(0), inches(0.) {
   	count++; // konstruojant objektą didinti jų skaičių
	cout << "Konstruktorius be argumentu: objektas Nr. "<< count << endl;
}
Distance(int ft, double in) : feet(ft), inches(in) {
	count++; // konstruojant objektą didinti jų skaičių
	cout << "Konstruktorius su argumentais: objektas Nr. "<< count << endl;
}
// 
~Distance() { }
//
void showDistance() const {
cout << "Pedos: " << feet << "  coliai: " << inches << endl;
}
static size_t returnCount() { // statiniu galima skelbti ir metodą
	return count;
}
//
};  
//
size_t Distance::count{ }; // statinio lauko inicializavimas nuline reikšme - už klasės ribų!	
//
int main() {
	//
	Distance d1, d2;
	const Distance d3(1, 2.3);
	Distance d[10];
	//
	cout << "d1: ";    d1.showDistance();
	cout << "d2: ";    d2.showDistance();
	cout << "d3: ";    d3.showDistance();
	cout << "d[9]: ";  d[9].showDistance();
	//
	cout << "count = " << d1.returnCount() << endl; // 1 variantas
cout << "count = " << Distance::returnCount() << endl; // 2 variantas
}
