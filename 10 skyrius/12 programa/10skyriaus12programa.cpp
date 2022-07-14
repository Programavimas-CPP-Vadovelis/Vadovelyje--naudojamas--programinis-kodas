import <iostream>;
import <format>;
using std::cout;
using std::cin;
using std::endl;
using std::format;
//
int main() {
	char eil[81];
	char* pchar = eil;
	//
	cout << "Viena eilute iveskite teksta iki 80 simboliu\n";
	cin.get(eil, 81, '\n');
	//
	while (*pchar)       // ciklas iki eilutės pabaigos \0
pchar++; // baigiant ciklą – galinio eilutės simbolio adresas
	//
	cout << format("Tekste {} yra {} simboliu\n", eil, pchar - eil);
	//
}
