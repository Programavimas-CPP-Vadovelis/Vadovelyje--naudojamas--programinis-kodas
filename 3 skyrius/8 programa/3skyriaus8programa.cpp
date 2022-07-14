import <iostream>;
import <cmath>;
using namespace std;
//
int main() {
//
double a, b, c;
cout << "Iveskite lygties koeficientus\n";
cin >> a >> b >> c;
cout << "Lygtis: \n";
cout << a << "x^2 + " << b << "x + " << c << " = 0\n";
//
double d = b * b - 4. * a * c;
//
if (d >= 0.) {
	double x1 = (-b + sqrt(d)) / (2. * a),
		     x2 = (-b - sqrt(d)) / (2. * a);
	cout << "Saknys: " << x1 << "   " << x2 << endl;
}
else {
	cout << "Realiu saknu nera\n";
}
//
}
