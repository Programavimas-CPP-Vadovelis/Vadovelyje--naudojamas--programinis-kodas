import <iostream>;
import <iomanip>;
using std::cout;
using std::cin;
using std::setw;
using std::endl;

int main() {
	//
	const size_t SIZE { 12 };
	size_t i{ 1 };
	//
	cout << endl << SIZE << " x " << SIZE << " Daugybos lentele" << endl << endl;

	cout << endl << "     |";
	for (; i <= SIZE; i++)         // ciklas nuo i=1 stulpelių pavadinimams išvesti.
		cout << setw(3) << i << " "; // i pradinė reikšmė =1

	cout << endl;
	for (i = 0; i <= SIZE; i++)    // ciklas brūkšniui po antrašte išvesti.
		cout << "_____";             // Būtinas i=0: po paskutinio ciklo i = SIZE+1

	for (i = 1; i <= SIZE; i++) {  // išorinis ciklas per eilutes
		cout << endl << setw(3) << i << "  |";

		for (size_t j = 1; j <= SIZE; j++) // vidinis ciklas per stulpelius
			cout << setw(3) << i * j << " ";

	} // išorinio ciklo pabaiga
//
	cout << endl << endl;
}
