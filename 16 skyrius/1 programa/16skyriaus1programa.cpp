import <iostream>;
using std::cout;
using std::endl;
//
template <class T> // šablono formatas – T; galima rašyti template <typename T>
T abs(T n) {       // funkcija dabar naudoja formatą T
	return n < 0 ? -n : n;
}
//
int main() {
	//
	int i = -10;
	long li = -10;
	float f = -10.f;
	double d = -10.;
	//
	cout << "int    " << abs(i) << endl;
	cout << "long   " << abs(li) << endl;
	cout << "float  " << abs(f) << endl;
	cout << "double " << abs(d) << endl;
	//
}
