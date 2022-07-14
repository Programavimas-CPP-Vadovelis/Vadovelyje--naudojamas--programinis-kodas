import <iostream>;
import <iomanip>;
using std::cout;
using std::endl;
using std::setw;

int main() {
	//
	int i{ 1 }, cube{ 1 };     // būtina inicializuoti
	//
	while (cube <= 1000) {
		cout << setw(5) << i << setw(10) << cube << endl;
		i++;
		cube = i * i * i;
	}
	//
}
