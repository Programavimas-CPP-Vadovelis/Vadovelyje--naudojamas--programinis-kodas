import <iostream>;
import <string>;
//
//
class Person {
private:
	std::string name;
public:
	Person() : name{} {}
	//
	Person(std::string s) : name{ s } { }
	//
	~Person() { }
	//
	void getName() {
std::cout << "Iveskite pavarde:\n";
std::cin >> name;
	}
	void showName() {
std::cout << name << std::endl;
	}
};
//
int main() {
Person* personp[100]; // statinis rodyklių į objektus masyvas
int n = 0;	    // objektų skaičius
char s;	    // įvedimui tęsti/nutraukti
//
do {
	personp[n] = new Person;  // konstruktoriumi be argumentų formuojama n-tojo objekto atmintis
	personp[n]->getName(); // į atmintį įvedamos objekto laukų reikšmės
	n++;
	std::cout << "Ar testi pavardziu ivedima? t/n\n";
	std::cin >> s;
} while (s == 't');
//
for (int i = 0; i < n; i++) {
std::cout << "Asmuo Nr. " << i + 1 << "   ";
personp[i]->showName();
}
// 
for (int i = 0; i < n; i++) 
	delete personp[i]; // išlaisvinama objektams skirta atmintis
}
