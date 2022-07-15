import <iostream>;
import <vector>;
using std::cout;
using std::endl;
//
class Class {
private:
	int n;
	int* data;
public:
	Class( int n, int* d) {
		this->n = n;
		data = new int[n];
		for (size_t i{}; i < n; i++) data[i] = d[i];
		cout << "Konstruktorius objektui\n";
		for (size_t i{}; i < n; i++) cout<<data[i]<<" "; 
		cout << endl << endl; 
	}
	//
	Class(Class& c) {
		n = c.n;
		data = new int[n];
		for (size_t i{}; i < n; i++) data[i] = c.data[i];
		cout << "Kopijos konstruktorius objektui\n";
		for (size_t i{}; i < n; i++) cout << data[i] << " ";
		cout << endl << endl;
	}
	//
	Class(Class&& cm)  { 
		n = cm.n; // paprastą kintamąjį kopijuojame „giliai“
		data = cm.data; // rodyklių kopijavimas – „seklusis“ kopijavimas
		cout << "Kreipties konstruktorius objektui\n";
		for (size_t i{}; i < n; i++) cout << data[i] << " ";
		cout << endl << endl;
		cm.data = nullptr; 
	}
	~Class() {
		if (data != nullptr) { 
			cout << "Destruktorius duomenims\n";
			for (size_t i{}; i < n; i++) cout <<data[i]<< " ";
			cout << endl << endl;
			delete[] data;
		}
		else
			cout << "Destruktorius nulptr rodyklei\n\n";
	}
	//
	void showClass() {
		for (size_t i{}; i < n; i++) cout << data[i]<<" ";
		cout << endl;
	}
};

int main() {
	//
	int d1[]{ 1,2,3,4,5 };
	int d2[]{ 60,70,80 };
	int n1 = sizeof(d1) / sizeof(d1[0]);
	int n2 = sizeof(d2) / sizeof(d2[0]);
	//
	std::vector<Class> v;
	v.push_back(Class{ n1,d1 });
	v.push_back(Class{ n2,d2 });
	//
	cout << "Vektoriaus duomenys\n";
	for (size_t i{}; i < v.size(); i++) v.at(i).showClass();
	cout << endl; 
	//
}
