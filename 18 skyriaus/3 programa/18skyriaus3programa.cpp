import <iostream>;
import <optional>;
using std::cout;
using std::endl;
using std::string;
using std::optional;
using std::nullopt;
//
class Person{
private: 
	string firstName;
	optional<string> middleName;
	string surname;
public:
Person(string fN = " ", string s = " ", optional<string> mN = nullopt) { 
                     // pasirinktinis argumentas turi būti paskutinis
		firstName = fN;
		surname = s;
		if (mN) middleName = mN;
	}
	~Person() {}
	void showPerson() {
		cout << "First name: " << firstName << endl;
		if (middleName) cout << "Middle name: " << *middleName << endl;
		cout << "Surname: " << surname << endl;
	}
};

//
int main() {
	Person p1("Vardas", "Pavarde");
	Person p2("Vardas_1", "Vardas_2", "Pavarde");
	//
	p1.showPerson();
	cout << endl;
	p2.showPerson();
}
