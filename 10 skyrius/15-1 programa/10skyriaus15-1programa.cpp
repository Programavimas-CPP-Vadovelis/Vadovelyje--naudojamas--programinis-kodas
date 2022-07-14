import <iostream>;
import <string>;
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
void pointerSort(Person**, int);
//
size_t n; // objektų skaičius, t.y. sąrašo ilgis
//
std::cout << "Iveskite objektu skaiciu\n";
std::cin >> n;
std::cout << "Sarase yra  " << n << "  pavardziu\n";
//
Person** personp = new Person*[n]; // dinaminė atmintis rodyklių masyvui
//
for (size_t i = 0; i < n; i++) {
	personp[i] = new Person;  // dinaminė atmintis i-ajam objektui
	personp[i]->getName();
}
//
std::cout << "Pradinis pavardziu masyvas\n";
for (size_t i = 0; i < n; i++) {
	std::cout << "Asmuo Nr. " << i + 1 << "  ";
	personp[i]->showName();
}
//
pointerSort(personp, n); // rikiavimas
//
std::cout << std::endl;
std::cout << "Isrikiuotas pavardziu masyvas\n";
for (int i = 0; i < n; i++) {
	std::cout << "Asmuo Nr. " << i + 1 << "  ";
	personp[i]->showName();
}
//
for (size_t i = 0; i < n; i++)
	delete personp[i];  // išlaisvinama kiekvieno objekto atmintis
delete[] personp;         // išlaisvinama rodyklių masyvo atmintis
}
//
void pointerSort(Person** p, size_t n) {  // 1 pastaba
	//
	void sort2pointers(Person**, Person**);  // 1 pastaba
	//
	for (size_t i = 0; i < n - 1; i++)
		for (size_t j = i + 1; j < n; j++)
			sort2pointers(p + i, p + j);  // 2 pastaba
}
//
void sort2pointers(Person** p1, Person** p2) {
	if ((*p1)->returnName() > (*p2)->returnName()) {  // 3 pastaba
		Person* temp = *p1;  // 4 pastaba
		*p1 = *p2;
		*p2 = temp;
	}
}
