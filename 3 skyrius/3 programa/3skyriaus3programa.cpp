import <iostream>;
using std::cin;
using std::cout;
using std::endl;

int main() {
	unsigned long long number{}; // number skiriame tokį pat kaip fact formatą
	unsigned long long fact{ 1LL };
	//
	cout << "Iveskite skaiciu\n";
	cin >> number;
	//
	for (unsigned long long i = number; i > 0; i--)   fact *= i;
	//
	cout << "Skaiciaus " << number << " faktorialas yra " << fact << endl;
	//
}
