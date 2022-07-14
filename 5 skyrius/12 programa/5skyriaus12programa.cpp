import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
double  power(double number, int index);
// 
int main() {
double number;
int index;
char s;
//
do {
cout << "Iveskite pradini skaiciu ir laipsnio rodikli\n";
cin >> number >> index;
cout <<format("\nSkaicius {:10.5g} pakeltas laipsnio rodikliu {} ", number, index);
cout << format("  bus  {:10.5g}\n", power(number, index) );
cout << "Ar testi skaiciavima? t/n\n";
cin >> s;
} while (s != 'n');
//
}
//
double power(double x, int n) {
// 
// Argumentai: x – pradinis skaičius
//                 n – laipsnio rodiklis
// Grąžinama reikšmė: rezultatas, x pakeltas laipsniu n
//
if (n < 0) {
x = 1. / x;
n = -n;
}
//
if (n > 0)
return x * power(x, n - 1);  // rekursinis funkcijos kreipinys į save pačią
else		               // išėjimas iš rekursinės grandinės: x^0=1
return 1.;
}
