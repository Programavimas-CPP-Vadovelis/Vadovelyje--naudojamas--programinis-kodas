export module errors;
import <string>;
//
export class Error {
private:
	std::string message;
public:
	explicit Error(std::string m = "Ivyko klaida") : message{ m } {}
	virtual ~Error() = default;
	virtual std::string what() const {
		return message;
	}
};
//
export class BigError : public Error {
public:
	explicit BigError(std::string m = "Ivyko didele klaida") : Error(m) {}
};
//
export class HugeError : public BigError {
public:
explicit HugeError(std::string m = "Ivyko milziniska klaida") : BigError(m) {}
};


import <iostream>;
import errors;
using std::cout;
using std::endl;
//
int main() {
for (size_t i{}; i < 5; i++) {
try {
if (i == 1) throw Error{};
else if (i == 2) throw BigError{};
else if (i == 3) throw HugeError{};
}
catch (const HugeError& he) {
cout << "HugeError objektas sugautas: " << he.what() << endl;
}
catch (const BigError& be) {
cout << "BigError objektas sugautas: " << be.what() << endl;
}
catch (const Error& e) {
cout << "Error objektas sugautas: " << e.what() << endl;
}
cout << "i po catch bloku: " << i << endl;
}
}
