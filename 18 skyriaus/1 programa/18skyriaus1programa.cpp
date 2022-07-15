import <iostream>;
import <optional>;
using std::cout;
using std::endl;
//
std::optional<double> divide(double nominator, double denominator) {
	if (denominator != 0.) return nominator / denominator;
	return {};
	// return std::nullopt; // alternatyva
}
//
std::optional<size_t> findSymbol(const char s[], char c) {
	for (size_t i=0; i < strlen(s); i++) 
		if (s[i] == c) 	
			return i + 1;
	return std::nullopt;
	//return {}; // alternatyva
}
//
int main() {
	//
	std::optional<size_t> os = findSymbol("String data", 'g'); 
	if (os) cout << "Symbol g is " << *os <<"th" << endl;
	else cout << "Symbol g not found\n";
	//
	os = findSymbol("String data", 'x');
	if (os) cout << "Symbol x is " << *os << "th" << endl;
	else cout << "Symbol x not found\n";
	//
	std::optional<double> od = divide(1., 0.);
	if (od) cout << "Value " << *od << endl;
	else cout << "No value\n";
	//
	od = divide(1., 5.);
	if ( od.has_value() ) cout << "Value " << od.value() << endl; // 
// alternatyva
	else cout << "No value\n";
}
