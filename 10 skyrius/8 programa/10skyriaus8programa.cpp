import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
int main() {
	//
	int** array; // dvimatis masyvas-rodyklė
	int n, m;  // masyvo matai
	//
	cout << "Iveskite masyvo matus\n";
	cin >> n >> m;
	cout << format("Masyvo matai yra {} x {}\n", n, m );
	//  
	// Dinaminės atminties skyrimas
	//
	array = new int* [n]; // vieta adresų masyvui
	for (int i = 0; i < n; i++)
		array[i] = new int[m]; // vietos vienmačiams masyvams
	//
	// Masyvo formavimas ir spausdinimas
	//
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			array[i][j] = (i + 1) * (j + 1);
			//*(*(array+i)+j) = (i+1)*(j+1); // alternatyvi 
// sintaksė
	cout << "Suformuotas masyvas:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << array[i][j] << "  ";
		cout << endl;
	}
	//
	// Atminties išlaisvinimas
	//
	for (int i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
	//
}
