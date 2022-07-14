import <iostream>;

using std::cout;  //pastaba 1
using std::endl;
//using namespace std;

int main() {
	//
	int a, b;
	//
	cout << "Iveskite du skaicius:  ";
	std::cin >> a >> b;		//pastabos 2,3
	//
	int c = a + b;		//pastaba 5
	cout << "\xB2 a = " << a << '\n' << '\n' << "\xB2 b = " << b << endl;  //pastaba 4
	cout << "\nRezultatas: " << c << endl;
	//
}
