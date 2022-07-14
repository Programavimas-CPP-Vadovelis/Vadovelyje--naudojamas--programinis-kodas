import <iostream>;
using std::cout;
using std::cin;
using std::endl;

int main() {
	unsigned int number, div;
	//
	cout << "Iveskite skaiciu\n";
	cin >> number;
	cout << "Ivesta: " << number << endl;
	//
	for (div = 2; div <= number / 2; div++) {
	if (number % div == 0) {
		cout << "Skaicius ne naturinis: dalijasi is " << div << endl;
		return 0; // baigia programą; 0 – viskas gerai
	}
	}
	cout << "Skaicius naturinis\n";
	//
}
