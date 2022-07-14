import <iostream>;
import <iomanip>;  // manipuliatoriui setw
using std::cout;
using std::endl;
using std::setw;

int main() {
int cube{};  // inicializuojama nuline reikšme
//
for (size_t i = 1; i <= 10; i++) {
		cout << setw(5) << i;  // setw nustato išvesties lauką 5 simboliams
		cube = i * i * i;
		cout << setw(8) << cube << endl;
	}
	//
}
