import <fstream>;
import <iostream>;
using std::fstream;
using std::ios;
using std::cout;
using std::cin;
using std::endl;
//
int main() {
    //
    char fvd[16], fvr[16];  // failų pavadinimai iš ne daugiau kaip 15 simbolių
    fstream is;
    fstream os;
    //
    cout << "Iveskite duomenu failo varda (ne daugiau kaip 15 simboliu)\n";
    cin >> fvd;
    cout << "Iveskite rezultatu failo varda (ne daugiau kaip 15 simboliu)\n";
    cin >> fvr;
    //
    is.open( fvd, ios::in );
    if (is.fail()) {
        cout << "Nera duomenu failo vardu " << fvd << endl;
        return -1;
    }
    os.open( fvr, ios::out );
    if (os.fail()) {
        cout << "Nepavyko atverti rezultatu failo vardu " << fvr << endl;
        return -2;
    }
    //
    char s;
    int i;
    double d;
    char e1[80], e2[80];
    // Skaitymas is duomenu failo ir ...
    is >> s >> i >> d >> e1 >> e2;
    // ...rasymas i rezultatu faila
    os << "s= " << s << endl << "i= " << i << endl << "d= " << d << endl
       << "e1= " << e1 << endl << "e2= " << e2 << endl;
    //
    is.close();
    os.close();
    //
}
