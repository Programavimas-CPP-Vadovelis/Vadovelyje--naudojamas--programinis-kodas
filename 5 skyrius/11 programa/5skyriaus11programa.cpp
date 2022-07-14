import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
unsigned long long  factorial( unsigned long long );
// 
int main() {
unsigned long long  number;
//
cout << "Iveskite teigiama skaiciu\n";
cin >> number;
//
cout <<format( "\nSkaiciaus {} faktorialas yra {} ", number, factorial(number) );
	//
}
//
unsigned long long  factorial(unsigned long long  n) {
// 
// Argumentas: n – pradinis skaičius
// Grąžinama reikšmė: rezultatas, faktorialas
//
if (n > 1)
return n * factorial(n - 1);  // rekursinis funkcijos kreipinys į save pačią
else		                    // išėjimas iš rekursinės grandinės
        return 1;
}
