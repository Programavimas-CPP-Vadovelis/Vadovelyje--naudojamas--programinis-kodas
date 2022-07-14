import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
void stars(char s, int sk);
//
int main() {
	//
	char symbol;
	size_t  number;
	//
	cout << "Iveskite simboli ir ju skaiciu\n";
	cin >> symbol >> number;
	cout << "Eilute bus formuojama is " << number 
     << " simboliu "<<symbol<<endl<<endl;
	//
	stars(symbol, number);   
	cout << "Duomens tipas     Ilgis     Diapazonas\n";
	stars(symbol, number);  
	cout << "char             1B       -128 - +127" << endl
<< "short            2B       -32768 - +32767" << endl
<< "int              4B       ~-2e9 - ~+2e9" << endl
<< "long             4B       ~-2e9 - ~+2e9" << endl;
	stars(symbol, number);  
	//
}
//
void stars(char c, size_t  n) {       
	for (size_t i = 0; i < n; i++) cout << c;
	cout << endl;
}
