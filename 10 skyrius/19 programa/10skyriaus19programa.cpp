import <iostream>;
//
double* cube(double);  
//
int main() {
	double number = 5.;
	//
	double* p = cube(number);
	std::cout << "Skaiciaus  " << number <<
             " kubas yra " << *p << std::endl;
}
//
double* cube(double x) {
	double result = x * x * x;
	return &result;
}



import <iostream>;
import <memory>;
//
std::unique_ptr<double> cube(double);  
//
int main() {
	double number = 5.;
	//
	std::unique_ptr<double> p = cube(number);
	std::cout << "Skaiciaus  " << number << 
                      " kubas yra " << *p << std::endl;
}
//
std::unique_ptr<double> cube(double x) {
	double result = x * x * x;
	auto p{ std::make_unique<double>(result) };
	return p;
}
