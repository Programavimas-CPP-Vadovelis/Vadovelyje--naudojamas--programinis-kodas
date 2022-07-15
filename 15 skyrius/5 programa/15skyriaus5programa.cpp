import <iostream>;
import errors;
using std::cout;
using std::endl;
//
int main() {
for (size_t i{}; i < 5; i++) {
try {
try {
if (i == 1) throw Error{};
else if (i == 2) throw BigError{};
else if (i == 3) throw HugeError{};
}
catch (const HugeError& he) {
cout << "HugeError objektas sugautas: " << he.what() << endl;
}
catch (...) {
cout << "Kazkoks objektas sugautas. Perduodamas apdoroti toliau\n ";
throw; // klaida perduodama išoriniam try blokui
}
}
 catch (const Error& e) {
cout << "Sugautas objektas: "<<typeid( e ).name()<<" "<<e.what()<< endl;
}
cout << "i po catch bloku: " << i << endl;
}
}
