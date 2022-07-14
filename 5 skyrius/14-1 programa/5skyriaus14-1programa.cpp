import <iostream>;
using std::cout;
using std::endl;
//
double& maz(double a, double b) {
	if (a < b) return a;
	else return b;
};
//
int main() {
	double a = 10, b = 20, c = 30;
	maz(a, b) = c;
	cout << " a b c " << a << "  " << b << "  " << c << endl;
}
