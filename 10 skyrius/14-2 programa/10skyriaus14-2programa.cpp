import <iostream>;
import <memory>;
import <string>;
//
//
class Person {
private:
	std::string name;
public:
	Person(): name{ } { }
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
auto personp{ std::make_unique<std::unique_ptr<Person>[]>(100)}; //1 pastaba 
size_t n = 0; 
char s;
do {
personp[n] = std::make_unique<Person>();  // 2 pastaba
personp[n]->getName();
n++;
std::cout << "Ar testi pavardziu ivedima? t/n\n";
std::cin >> s;
} while (s == 't');
//
for (size_t i = 0; i < n; i++) {
std::cout << "Asmuo Nr. " << i + 1 << "   ";
personp[i]->showName();
}
//  dabar atminties išlaisvinti nebereikia
}
