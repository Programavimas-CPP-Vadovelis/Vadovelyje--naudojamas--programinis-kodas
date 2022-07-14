import  <iostream>;
using std::cout;
using std::endl;

int main() {
	int i{ 10 };
	cout << "i =  " << i << endl;   // bus spausdinama reikšmė 10
	cout << "i =  " << ++i << endl; // 11
	cout << "i =  " << i << endl;   // 11
	cout << "i =  " << i++ << endl; // 11
	cout << "i =  " << i << endl;   // 12
}
