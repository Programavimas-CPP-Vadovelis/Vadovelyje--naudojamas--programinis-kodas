import <iostream>;
import <conio.h>;  // funkcijai _getch
using std::cout;
using std::endl;

//
void getchrt(void);
void putchar(void);
//
char s;  // automatiškai inicializuojamas nuline reikšme 
         // (char atveju – intervalo simbolis)
//
int main() {
    //
    while (s != '\r') { // t. y. kol nespusteltas Enter klavišas
        getchrt();
        putchar();
    }
    cout << endl;
    //
 }
//
void getchrt() {
    s = _getch();  // _getch nuskaito nuspausto klaviatūros klavišo reikšmę
}
//
void putchar() {
    cout << s;
}
