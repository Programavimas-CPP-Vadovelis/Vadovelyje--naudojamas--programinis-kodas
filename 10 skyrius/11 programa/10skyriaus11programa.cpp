import <iostream>;
using std::cout;
using std::endl;
//
void showString(const char*, const char*); 
void toUpperCase(char*, int);  
void toLowerCase(char*, int);   
//
int main() {
    char text[] = "This is a Mixed Case";  
    //
    int a = 'a', A = 'A', space = ' ', difference = a - A;  
    //
    showString("Initial text", text);
    toUpperCase(text, difference);
    showString("Changed to upper case", text);
    toLowerCase(text, difference);
    showString("Changed to lower case", text);
    //
}
//
void showString(const char* t, const char* s) {
    while (*t)
        cout << *t++;
    cout << ":  ";
    while (*s)
        cout << *s++;
    cout << endl << endl;
}
//
void toUpperCase(char* s, int d) {
    while (*s) {
        if (*s >= 'a')
            *s -= d;
        s++;
    }
}
//
void toLowerCase(char* s, int d) {
    while (*s) {
        if (*s >= 'A' && *s <= 'Z')
            *s += d;
        s++;
    }
}
