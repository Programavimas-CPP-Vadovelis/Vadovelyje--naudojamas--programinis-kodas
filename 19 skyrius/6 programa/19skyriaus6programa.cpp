import <iostream>;
import <vector>;
import <algorithm>;
using std::cout;
using std::endl;
//
int main() {
	//
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	int el{ 3 }; // reikšmė, kuriai ieškomas artimiausias ir tolimiausias elementai
	cout << "Vector elements\n";
	for (auto vi : v) cout << vi << " ";
	cout << endl;
	//
	cout << "Min element: " <<
		*std::min_element(begin(v), end(v)) << endl;
	cout << "Max element: " <<
		*std::max_element(begin(v), end(v)) << endl;
	//
	auto nearest{ [=](int i1, int i2) { // lambda funkciją galima parašyti
		return std::abs(i1 - el) < std::abs(i2 - el); // ir prieš ją
	} }; 			// kviečiant, atskiru operatoriumi
	cout << "Nearest to " << el << " is " <<
		*std::min_element(begin(v), end(v), nearest) << endl;
	cout << "Furthest to " << el << " is " <<
		*std::max_element(begin(v), end(v), nearest) << endl;
}
