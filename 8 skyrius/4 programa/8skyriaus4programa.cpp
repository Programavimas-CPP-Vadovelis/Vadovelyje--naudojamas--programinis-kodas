import <fstream>;
import <iostream>;
using std::fstream;
using std::ios;
using std::cout;
//
int main() {
    //
    char sm[] = "Pradinis duomenu srautas";
    //
    fstream os("rezultatai.txt", ios::out);
    if (os.fail()) {
        cout << "Nepavyko atverti failo rezultatams\n";
        return -1;
    }
    //
    os.write(sm, 10);
    //
    os.close();
    //
}
