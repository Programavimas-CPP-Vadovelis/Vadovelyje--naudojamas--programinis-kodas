import <iostream>;
import <memory>;
import <string>;
import <vector>;
import <algorithm>;
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
	void showName() { std::cout << name << std::endl; }
	//
	std::string returnName() { return name; }
};
//
int main() {
//
std::vector< std::shared_ptr<Person> > personp;
size_t n = 0;
char s;
do {
	personp.push_back(std::make_shared<Person>());
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
//
sort(personp.begin(), personp.end(),  // 1 pastaba
	[](std::shared_ptr<Person> p1, std::shared_ptr<Person> p2) // 2 pastaba
	->bool { return p1->returnName() < p2->returnName(); }); // 3 pastaba
//
std::cout << std::endl;
std::cout << "Isrikiuotas pavardziu masyvas\n";
for (int i = 0; i < n; i++) {
	std::cout << "Asmuo Nr. " << i + 1 << "  ";
	personp.at(i)->showName();
}
}
