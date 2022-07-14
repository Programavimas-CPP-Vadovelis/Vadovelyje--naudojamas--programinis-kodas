import <fstream>;
using std::ofstream;
using std::ifstream;
using std::endl;
//
int main() {
	ifstream is;  // failų skelbimai
	ofstream os;
	//
	is.open("duomenys.txt"); // failų atvėrimas
	os.open("rezultatai.txt");
	//
	int s1, s2;
	is >> s1 >> s2;            // darbas su failais
	os << "Nuskaityti skaiciai " << s1 << "  " << s2
	   << ",  ju suma yra " << s1 + s2 << endl;
	//
	is.close();  // failų uždarymas
	os.close();
	//
}
