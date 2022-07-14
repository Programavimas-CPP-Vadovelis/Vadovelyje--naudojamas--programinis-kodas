import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	int k1 = 10,
	    k2 = 20;
	int* p = &k1; // rodyklę nukreipiame į k1
	cout << "Adresas ir reiksme  " << p << "  " << *p << endl;
	//
	*p = 30; // atitinka k1 = 30
	k2 = *p; // atitinka k2 = 30
	cout << "Kintamuju k1 ir k2 reiksmes  " << *p << "  " << k2 << endl;
	//
}
