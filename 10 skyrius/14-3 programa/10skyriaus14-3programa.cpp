import <iostream>;
import <memory>;
import <string>;
import <vector>;
//
//
class Person {
private:
	std::string name;
public:
	Person() : name{ } { }
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
	// 
	std::vector< std::unique_ptr<Person> > personp;
	size_t n = 0;
	char s;
	do {
		personp.push_back(std::make_unique<Person>());
		personp.at(n)->getName();
		n++;
		std::cout << "Ar testi pavardziu ivedima? t/n\n";
		std::cin >> s;
	} while (s == 't');
	//
	for (size_t i = 0; i < n; i++) {
		std::cout << "Asmuo Nr. " << i + 1 << "   ";
		personp.at(i)->showName();
	}
	//  atminties išlaisvinti nereikia
}
