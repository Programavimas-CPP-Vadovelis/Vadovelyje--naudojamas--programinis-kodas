import <iostream>;
import <vector>;
using std::cout;
using std::endl;
//
class Class {
private:
	int* data;
public:
	Class( int* d) {
		data = new int[10];
		for (size_t i{}; i < 10; i++) data[i] = d[i];
		cout << "Konstruktorius objektui\n";
		for (size_t i{}; i < 10; i++) cout<<data[i]<<" "; 
		cout << endl << endl; 
	}
	//
	Class(const Class& c) {
		data = new int[10];
		for (size_t i{}; i < 10; i++) data[i] = c.data[i];
		cout << "Kopijos konstruktorius objektui\n";
		for (size_t i{}; i < 10; i++) cout << data[i] << " ";
		cout << endl << endl;
	}
	//
	Class(Class&& cm) : data{ cm.data } { // "move" konstruktorius nukopijuojame laikino objekto cm rodyklę į darbinio objekto rodyklę
		cout << "Kreipties konstruktorius objektui\n";
		for (size_t i{}; i < 10; i++) cout << data[i] << " ";
		cout << endl << endl;
		cm.data = nullptr; // būtina! Rodyklės į laikiną objektą neturi likti, antraip kils klaida naikinant objektus
	}
	~Class() {
		if (data != nullptr) {  // naikinti reikia tik egzistuojančius duomenis
			cout << "Destruktorius duomenims\n";
			for (size_t i{}; i < 10; i++) cout <<data[i]<< " ";
			cout << endl << endl;
			delete[] data;
		}
		else
			cout << "Destruktorius nulptr rodyklei\n\n";
			// nieko naikinti nereikia
	}
	//
	void showClass() {
		for (size_t i{}; i < 10; i++) cout << data[i]<<" ";
		cout << endl;
	}
};

int main() {
	//
	int d1[10]{ 1,2,3,4,5 };
	int d2[10]{ 60,70,80 };
	//
	std::vector<Class> v;
	v.push_back(Class{ d1 });
	v.push_back(Class{ d2 });
	//
	cout << "Vektoriaus duomenys\n";
	for (size_t i{}; i < v.size(); i++) v.at(i).showClass();
	cout << endl; 
	//
}
