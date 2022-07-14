import <iostream>;
using std::cout;
using std::endl;
//
void stars(char = '*', size_t = 60); // prototipas su numatytosiomis argumentų reikšmėmis;
							      // argumentų vardus nurodyti nebūtina
//
int main() {
	stars();            // argumentų reikšmės yra * ir 60
	cout << "Duomens tipas     Ilgis     Diapazonas\n";
	stars('-', 50);    // argumentų reikšmės yra – ir 50
	cout  << "char              1B        -128 - +127" << endl
 << "short             2B       -32768 - +32767" << endl
 << "int               4B       ~-2e9 - ~+2e9" << endl
 << "long              4B       ~-2e9 - ~+2e9" << endl;
	stars('=');      //  argumentų reikšmės yra = ir 60
	//stars( 100 );  // klaida: negalima praleisti pradinių ar vidurinių 
     // argumentų
}
//  
void stars(char c, size_t n) {
	for (size_t i = 0; i < n; i++) cout << c;
	cout << endl;
}
