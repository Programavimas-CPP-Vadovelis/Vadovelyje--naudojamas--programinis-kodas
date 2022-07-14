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
    char s;  // simbolis, kurį nuskaitysime iš failo
    size_t kiekA = 0, kieka = 0;  // A ir a kiekiai
     //
    fstream is("duomenys.txt", ios::in);
    if (is.fail()) {
        cout << "Nera duomenu failo vardu duomenys.txt\n";
        return -1;
    }
    //
    while (is.get(s)) {  // 1 pastaba
    // while( is >> s ) {     // alternatyva
        if (s == 'A') kiekA++;
        if (s == 'a') kieka++;
    }
    //
    cout << "A yra " << kiekA << endl << "a yra " << kieka << endl;
    //
    is.close();
    //
}
