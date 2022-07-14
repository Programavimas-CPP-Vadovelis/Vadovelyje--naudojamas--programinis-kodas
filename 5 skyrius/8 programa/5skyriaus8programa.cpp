import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
void parts(double, double& intpart, double& fractpart);  // 1 pastaba  
//
int main() {
double number, intpart, fractpart;
//
cout << "Iveskite skaiciu\n";
cin >> number;
//
parts(number, intpart, fractpart);  // 2 pastaba
//
cout << format("Skaicius: {:+#10.5g}, jo sveikoji dalis: {:10.0f}, jo trupmenine dalis: {:10.5g}\n",number, intpart, fractpart); //  4 pastaba
	//
}
// Funkcija
void parts(double n, double& intp, double& fractp) {  //  3 pastaba
	// Argumentai: n - skaičius
	//             intp – rezultatas, sveikoji dalis
	//             fractp – rezultatas, trupmeninė dalis
	long t = static_cast<long>(n);       // sveikojo formato tarpinė ląstelė
	intp = static_cast<double>(t);
	fractp = n - intp;
}
