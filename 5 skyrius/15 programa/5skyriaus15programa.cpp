import <iostream>;
import <vector>;
//
const double* findOptimum(std::vector<double>&, bool(*compare)(double, double));
auto less   { [](double x, double y) { return x < y; } };
auto greater{ [](double x, double y) { return x > y; } };
//
int main() {
	//
	std::vector<double> array{ 1.,-2.,3.,-4.,5.,-6.,7. };
	//
	std::cout << "Minimumas  " << *findOptimum(array, less) << std::endl;
	std::cout << "Maksimumas  " << *findOptimum(array, greater) << std::endl;
}
//
const double* findOptimum(std::vector<double>& v, bool(*compare)(double, double)) {
	double* optimum = &v.at(0);
	for (size_t i = 1; i < v.size(); i++) {
		if (compare(v[i], *optimum))
			optimum = &v.at(i);
	}
	return optimum;
}
