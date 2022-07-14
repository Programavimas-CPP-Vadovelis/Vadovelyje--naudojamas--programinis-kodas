import <iostream>;
import <fstream>;
import <format>;
//
int iofile(std::fstream&, std::fstream&);
//
int main() {
	//
	std::fstream is("duomenys.txt", std::ios::in);
	std::fstream os("rezultatai.txt", std::ios::out);
	if (is.fail()) {
		std::cout << "Klaida atveriant duomenu faila\n";
		return -1;
	}
	if (os.fail()) {
		std::cout << "Nepavyko atverti failo rezultatams\n";
		return -2;
	}
	//
	iofile(is, os);
	//
	is.close();
	os.close();
	//
}
//
int iofile(std::fstream& is, std::fstream& os) {
// 
double s;  // į ląstelę s nuskaitysime po vieną pradinio failo skaičių
size_t n{};
//
while (!is.eof()) {       // kol nepasiekta failo pabaiga – 
is >> s;   	        // nuskaityti eilinį skaičių
if (is.fail()) {    // ar pavyko operacija?
std::cout << "Blogas pradinis duomenu failas. Stop\n";
os << "Blogas pradinis duomenu failas. Stop\n";
return -3;
}
n++;
os << std::format("Duomuo {}  {:+#15.5f}\n", n, s);  // formatuotą skaičių perduoti į os
}
return 0;
}
