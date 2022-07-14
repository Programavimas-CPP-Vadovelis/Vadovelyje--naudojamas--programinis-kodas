import <iostream>;
import <string>;
using std::string;
using std::cout;
using std::endl;
//
void showString(const string&, const string&); 
void toUpperCase(string&);  
void toLowerCase(string&); 
//
int main() {
    string text{ "This is a Mixed Case" };  
    //
    showString("Initial text", text);
    toUpperCase(text);
    showString("Changed to upper case", text);
    toLowerCase(text);
    showString("Changed to lower case", text);
    //
}
//
void showString(const string& t, const string& s) {
    string ts{ t + ":  " + s };
    cout << ts << endl << endl;
}
//
void toUpperCase(string& s) {
    for (auto& c : s)
        c = std::toupper(c);
}
//
void toLowerCase(string& s) {
    for (char& c : s)
        c = std::tolower(c);
}
