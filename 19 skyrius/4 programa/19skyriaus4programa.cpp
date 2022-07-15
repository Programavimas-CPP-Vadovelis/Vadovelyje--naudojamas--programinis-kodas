import <iostream>;
import <map>;
import <iterator>;
using std::cout;
using std::endl;
//
int main() {
	// 
	cout << "Ordered map\n\n";
	//
	std::map<std::string, unsigned long long> phoneBook = 
	{ {"Vardas4", 444}, {"Vardas2", 222}, {"Vardas3",333} }; // konstruktorius
	//
	phoneBook.insert({ "Vardas3",333 }); // taip galima įterpti naują elementą
	//
	phoneBook["Vardas1"] = 111; // taip galima įterpti naują elementą
	//
	for (auto [name, number] : phoneBook ) // vardus „name“ ir „number“ pasirenkame laisvai
		cout << name << "  " << number << endl; 
	cout << endl;
	//
	for (const auto& node : phoneBook) // alternatyva: „node“ yra klasės „pair“ formato; „first“ ir „second“ yra atviri jos laukai
		cout << node.first << "  " << node.second << endl; 
	cout << endl;
	
	//
	 for (auto it = phoneBook.begin(); it != phoneBook.end(); it++) //
// alternatyva: iteratorius
		cout << (*it).first << "  " << (*it).second << endl;
cout << endl;
	// 
	auto it = phoneBook.find("Vardas3"); //paieška pagal raktą
	if ( it != phoneBook.end() ) // jei raktas nerastas: it=end()
		cout << it->first << "  " << it->second << endl;
	else
		cout << "Key not found\n";                                            
}  
