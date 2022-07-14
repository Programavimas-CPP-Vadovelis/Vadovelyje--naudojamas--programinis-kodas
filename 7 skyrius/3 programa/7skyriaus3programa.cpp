import <iostream>;
using std::cout; 
using std::cin;
using std::endl;
//
double getavg(size_t);
//
int main() {
//
size_t number = 1; // kad while būtų bent kartą vykdomas
//
while (number != 0) {
	cout << "Iveskite skaiciu: ";
	cin >> number;
	cout << "Visu ivestu skaiciu vidurkis: " << getavg(number) << endl;
}
}
//
double getavg(size_t number) {
static double sum = 0.;  // double: kad rezultatas – vidurkis būtų gautas su trupmenine dalimi
static size_t k = 0;
sum += number;
k++;
return sum / static_cast<double>( k );
}
