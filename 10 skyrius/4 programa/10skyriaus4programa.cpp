import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	double convert(double);
	//
	double temp = 32.;
	cout << "Farenheito laipsniai: " << temp << endl
	     << "Celsijaus laipsniai:  " << convert(temp) << endl;
	//
}
//
double convert(double t) {
	return ((t - 32.) * 5. / 9.);
}



import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	void convert(double&);
	//
	double temp = 32.;
	cout << "Farenheito laipsniai: " << temp << endl;
	convert(temp);
	cout << "Celsijaus laipsniai:  " << temp << endl;
	//
}
//
void convert(double& t) {
	t = (t - 32.) * 5. / 9.;
}


import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	void convert(double*);
	//
	double temp = 32.;
	cout << "Farenheito laipsniai: " << temp << endl;
	convert(&temp);
	cout << "Celsijaus laipsniai:  " << temp << endl;
	//
}
//
void convert(double* pd) {
	*pd = (*pd - 32.) * 5. / 9.;
}
