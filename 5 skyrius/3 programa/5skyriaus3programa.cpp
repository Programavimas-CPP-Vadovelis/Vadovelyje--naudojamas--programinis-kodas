import <iostream>;
using std::cout;
using std::endl;
//
void stars(char, int);
//
int main() {
	//
	stars('-', 50);   // pirmoji eilutė - iš 50 simbolių '-'
	cout << "Duomens tipas     Ilgis     Diapazonas\n";
	stars('=', 45);  // eilutė iš 45 simbolių '='
	cout   << "char             1B       -128 - +127" << endl
<<  "short            2B       -32768 - +32767" << endl
<<  "int              4B       ~-2e9 - ~+2e9" << endl
<<  "long             4B       ~-2e9 - ~+2e9" << endl;
	stars('-', 50);  // eilutė iš 50 simbolių '-'
	//
}
//
void stars(char c, int n) {    
	for (size_t i = 0; i < n; i++) cout << c;
	cout << endl;
}
