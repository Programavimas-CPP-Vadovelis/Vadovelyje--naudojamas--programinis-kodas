import <iostream>;
import <vector>;
import <algorithm>;
using std::cout;
using std::endl;
using std::string;
//
int main() {
	//
	std::vector<string> v{ "a1", "b22", "c33", "d4444", "e55555"};
	cout << "Vector elements\n";
	for (auto vi : v) cout << vi << " ";
	cout << endl;
	//
	auto stringLength{ [=](string s1, string s2) {
		return s1.length() < s2.length();
	} };
	cout << "Longest string: " << // su funkcijomis "begin" ir "end"
		*std::max_element(begin(v), end(v), stringLength) << endl;
	cout<< "Shortest string: " << // su iteratoriais "begin" ir "end"
		*std::min_element(v.begin(), v.end(), stringLength) << endl;
}
