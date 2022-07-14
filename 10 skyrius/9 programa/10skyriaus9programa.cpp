import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	char eilm[] = "Realizavimas masyvu";
	const char* eilr = "Realizavimas rodykle"; // 1 pastaba
	//
	cout << eilm << endl;
	cout << eilr << endl;
	//
	//eilm++; klaida: eilm yra adresas, t. y. konstanta
	eilr += 13; // viskas gerai
	//
	cout << eilr << endl;
	//
}
