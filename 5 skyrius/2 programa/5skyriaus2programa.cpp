import <iostream>;
using std::cout;
using std::endl;
//
void stars() {       // funkcijos kūnas
	for (size_t i = 0; i < 45; i++) cout << '*';
	cout << endl;
}
//
int main() {
	//
	stars();   // kviečiama funkcija pirmajai eilutei išvesti
	cout << "Duomens tipas     Ilgis     Diapazonas\n";
	stars();  // eilutė lentelės antraštei atriboti
	cout << "char             1B       -128 - +127" << endl
<< "short            2B       -32768 - +32767" << endl
<< "int              4B       ~-2e9 - ~+2e9" << endl
<< "long             4B       ~-2e9 - ~+2e9" << endl;
	stars();  // eilutė lentelei užbaigti
	//
}
