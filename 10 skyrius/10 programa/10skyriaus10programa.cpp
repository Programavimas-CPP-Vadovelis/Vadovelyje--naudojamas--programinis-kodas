import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
char sdm[7][15] = { "Pirmadienis", "Antradienis", "Treciadienis", "Ketvirtadienis", "Penktadienis", "Sestadienis", "Sekmadienis" };
const char* sdr[7] = { "Pirmadienis", "Antradienis", "Treciadienis","Ketvirtadienis", "Penktadienis", "Sestadienis","Sekmadienis" };
	//
	for (size_t i = 0; i < 7; i++)
		cout << sdm[i] << endl;
	cout << endl;
	for (size_t i = 0; i < 7; i++)
		cout << sdr[i] << endl;
	//
}
