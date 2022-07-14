import <iostream>;
import <cstring>;
using std::cout;
using std::endl;
//
//  Prototipai
//
void showString(const char[], const char[]); // funkcijos eilutei spausdinti
void toUpperCase(char[], int);  // funkcijos eilutei pertvarkyti į didžiąsias raides
void toLowerCase(char[], int);   // funkcijos eilutei pertvarkyti į mažąsias raides
//
int main() {
    char text[] = "This is a Mixed Case";  // pradinis tekstas
        //
    int a = 'a', A = 'A', difference = a - A;  // simbolių aritmetiniai kodai
    cout << "ASCII codes for a and A  " << a << "  " << A  << endl
         << "a - A = " << difference << endl << endl;
    //
    showString("Initial text", text);
    toUpperCase(text, difference);
    showString("Changed to upper case", text);
    toLowerCase(text, difference);
    showString("Changed to lower case", text);
    //
}
//
void showString(const char t[], const char s[]) {
    for (unsigned int i = 0; i < strlen(t); i++)
        cout << t[i];
    cout << ":  ";
    for (unsigned int i = 0; i < strlen(s); i++)
        cout << s[i];
    cout << endl << endl;
}
//
void toUpperCase(char s[], int d) {
    for (unsigned int i = 0; i < strlen(s); i++)
        if (s[i] >= 'a')
            s[i] -= d;
}
//
void toLowerCase(char s[], int d) {
    for (unsigned int i = 0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += d;
}
