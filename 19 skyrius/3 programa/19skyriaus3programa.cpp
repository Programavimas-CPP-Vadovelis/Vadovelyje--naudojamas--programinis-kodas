import <iostream>;
import <vector>;
import <unordered_set>;
import <set>;
using std::cout;
using std::endl;
//
int main() {
// 
	std::vector<int> v{ 5,5,1,4,3,2,5,5 };
	cout << "Values\n";
	for (auto vi : v) cout << vi << " ";
	cout << endl << endl;
	// 
	cout << "Unordered set\n";
	std::unordered_set<int> us{5,5,1,4,3,2,5,5};
	for (auto usi : us) cout << usi << " ";
	cout << endl;
	//
	cout << "Ordered set: default - ascending\n";
	std::set<int> s1{ 5,5,1,4,3,2,5,5 };
	for (auto s1i : s1) cout << s1i << " ";
	cout << endl;
	//
	cout << "Ordered set: descending \n";
	std::set<int,std::greater<>> s2{ 5,5,1,4,3,2,5,5 };
	for (auto s2i : s2) cout << s2i << " ";
	cout << endl;
	//
}
