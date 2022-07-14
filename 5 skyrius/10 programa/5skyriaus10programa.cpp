import <iostream>;
using std::cout;
using std::endl;
//
void stars();                // funkcijos prototipai
void stars(char);
void stars(char, size_t);
//
int main() {
	stars();               // kviečiamas pirmasis funkcijos variantas ...
	cout << "Duomens tipas     Ilgis     Diapazonas\n";
	stars('-');         // ...antrasis ...
	cout << "char              1B       -128 - +127" << endl
<< "short             2B       -32768 - +32767" << endl
<< "int               4B       ~-2e9 - ~+2e9" << endl
<< "long              4B       ~-2e9 - ~+2e9" << endl;
	stars('=', 50);  // ...trečiasis 
	//
}

//   pirmasis funkcijos variantas
void stars() {
	for (size_t i = 0; i < 50; i++) cout << '*';
	cout << endl;
}
//   antrasis funkcijos variantas
void stars(char c) {
	for (size_t i = 0; i < 45; i++) cout << c;
	cout << endl;
}
//   trečiasis funkcijos variantas
void stars(char c, size_t  n) {
	for (size_t i = 0; i < n; i++) cout << c;
	cout << endl;
}
