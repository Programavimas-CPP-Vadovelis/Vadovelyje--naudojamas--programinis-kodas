import <iostream>;
import <vector>;
//
const double* findOptimum( std::vector<double>&, bool(*compare)(const double&,  const double&)); 
bool less(const double&, const double&);
bool greater(const double&, const double&);
//
int main() {
//
std::vector<double> array{ 1.,-2.,3.,-4.,5.,-6.,7. };
//
std::cout << "Minimumas  " << *findOptimum(array, less) << std::endl;
std::cout << "Maksimumas  " << *findOptimum(array, greater) << std::endl;
}
//
const double *findOptimum( std::vector<double>& v, bool(*compare)(const double&, const double&)) {
	double* optimum = &v.at(0);
for (size_t i = 1; i < v.size(); i++) {
		if (compare(v[i], *optimum))
			optimum = &v.at(i);
}
return optimum;
}
// 
bool less(const double& d1, const double& d2) {
	return d1 < d2;
}
//
bool greater(const double& d1, const double& d2) {
	return d1 > d2;
}
