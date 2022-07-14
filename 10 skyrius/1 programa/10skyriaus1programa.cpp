import <iostream>;
using std::cout;
using std::endl;
//
int main() {
//
int k1 = 10,k2 = 20,k3 = 30;
cout << "Kintamuju adresai:\n" << &k1 << endl << &k2 << endl << &k3 << endl;
//
int* p{};   // rodyklė, inicializuota nuline reikšme
p = &k1;  // rodykle nukreipiama į k1
cout << "Rodykles reiksme:  " << p << endl;
p = &k3;  // ta pati rodyklė dabar nukreipiama į k3
cout << "Rodykles reiksme:  " << p << endl;
p += 1;  // rodykle perstumiama į tolesnę 4B ilgio ląstelę
cout << "Perstumtos rodykles reiksme:  " << p << endl;
//
}
