import <iostream>;
//
double square(double);  // abiejų funkcijų prototipai
double cube(double);	// tiksliai sutampa
double sum(double array[], size_t n, double (*pfunction) (double)); //argumentų sąraše teikiamas rodyklės į funkciją prototipas
//
int main() {
	double array[] = { 12., -5., 10., 2., 3. };
	size_t n = (sizeof array) / (sizeof array[0]);
	//
	std::cout << "Sum of squares  " << sum(array, n, square) << std::endl;
	std::cout << "Sum of cubes  " << sum(array, n, cube) << std::endl;
}
//
double square(double x) {
	return x * x;
}
//
double cube(double x) {
	return x * x * x;
}
//
double sum(double x[], size_t n, double (*pf) (double)) {
	double s = 0.;
	for (size_t i = 0; i < n; i++)
		s += pf(x[i]);
	return s;
}
