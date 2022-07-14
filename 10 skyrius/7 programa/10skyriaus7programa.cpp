import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
int main() {
	//
	int size;      // masyvo ilgis – kintamasis
	//
	cout << "Nurodykite, kiek kubu skaiciuosime\n";
	cin >> size;
	cout << "Skaiciuosime " << size << " kubu\n";
	//
	int* array{ new int[ size ] }; // dinaminis masyvas: skliausteliai []
	//
	for (int i = 0; i < size; i++) {
array[i] = (i + 1) * (i + 1) * (i + 1); // 1 adresavimo būdas
//*(array + i) = (i+1)*(i+1)*(i+1);     // 2 būdas
//*array++ = (i+1)*(i+1)*(i+1);         // 3 būdas – klaida!
	}
	//
	for (int i = 0; i < size; i++)
cout << format( "Skaiciaus {}  kubas yra {}\n", i+1, array[i] );
	//
	delete[ ] array;  // atmintis išlaisvinama
	//
}
