import <iostream>;
import <vector>;
import <algorithm>;
import <iterator>;
using std::cout;
using std::endl;
//
int main() {
	// 
	std::vector<int> v{ 2,1,4,3,6,5,8,7,10,9 };
	cout << "Initial array\n";
	for (auto vi : v) cout << vi << "  ";
	cout << endl;
	//
	std::sort(v.begin(), v.end());  // rūšiavimas didėjančiai – pagal numatymą ...
	cout << "Ascending order\n";
	for (auto vi : v) cout << vi << "  ";
	cout << endl;
	//
	cout << "Descending order\n";
	std::sort(v.begin(), v.end(), std::greater<int>()); //... - mažėjančiai - tik su komparatoriumi
	for (auto vi : v) cout << vi << "  ";
	cout << endl;
	//
	cout << "Finding value in whole array\n"; // „15“ paieška masyve
	auto found = std::find(v.begin(), v.end(), 15); // „found“ – iteratorius į rastą sutaptį
	if (found != v.end()) cout << "Found value " << *found << endl;
	else cout << "Value not found\n";
	cout << endl;
	//
	cout << "Copy of a part of  array\n"; // pradinių 5 elementų kopijavimas
	std::vector<int> copyFromV(5);        // į kitą masyvą
	std::copy(v.begin(), v.begin() + 5, copyFromV.begin());
	for (auto vi : copyFromV) cout << vi << "  ";
	cout << endl << endl; 
	//
	cout << "min/max value\n"; // minmax‘o uždavinys.
	cout << "Max element: " << // Alternatyva:  rasti pradinius ir galinius iteratorius galima funkcijomis „begin“ ir „end“
*(std::max_element(std::begin(v), std::end(v))) << endl;
	cout << "Min element: " << 
*(std::min_element(std::begin(v), std::end(v))) << endl;
}
