import <iostream>;
import <vector>;
import <array>;
import <forward_list>;
import <list>;
import <deque>;
import <iterator>; 
using std::cout;
using std::endl;
//
int main() {
//
	// Masyvas; prieiga prie elementų - diapazoniniu ciklu for
//
	std::vector<int> v{ 1,2,3,4,5 };
	v.push_back(10);
	v.insert(v.begin() + 3, { 33,333 }); // įterpiami iškart du elementai 
	cout << "Vector\n";
	for (auto vi : v) cout << vi << " ";
	cout << endl;
//
	// Masyvas; prieiga prie elementų - funkcija at()
//
	std::array<int, 5> a{ 1,2,3,4,5 };
	a.at(2) = 33;
	cout << "Array\n";
	for (size_t i = 0; i < a.size(); i++) cout << a.at(i) << " ";
	cout << endl;
//
	// Vienpusis sąrašas; prieiga prie elementų - iteratoriumi
//
	std::forward_list<int> fl{ 1,2,3,4,5 };
	fl.push_front(10);
	std::forward_list<int>::iterator itfl; // iteratoriaus formavimas 
	itfl = fl.begin(); // iteratorius-rodyklė nukreipiamas į pradinį elementą	itfl++;
	fl.insert_after(itfl, 11); // FL sąrašui - tik funkcija insert_after
	cout << "Forward list\n";
	for (itfl = fl.begin(); itfl != fl.end(); itfl++) cout << *itfl << " "; //
	        // jei ciklas pereinamas iteratoriumi – rekomenduojama tokia forma
	cout << endl; 
//
	// Dvipusis sąrašas; priega prie elementų - iteratoriumi ir ciklu. Paprastesnis iteratoriaus formavimas
//
	std::list<int> l{ 1,2,3,4,5 };
	l.push_front(10);
	l.push_back(100);
	auto itl = l.end(); // iteratoriaus formavimas automatiškai; iteratorius nukreiptas už list‘o paskutinio elemento
	itl--;
	l.insert(itl, 55); 
	cout << "List\n";
	for (auto li : l) cout << li << " ";
	cout << endl;
//
	// Dvipusė eilė; prieiga prie elementų - iteratoriumi ir adreso operacija
//
	std::deque<int> d{ 1,222,3,4,5 };
	d.push_front(10);
	auto itd = d.begin();
	itd++; itd++;
	d.erase(itd);
	cout << "Deque\n";
	for (auto di : d) cout << di << " ";
	cout << endl;
}
