import <iostream>;
import <conio.h>; // funkcijai _getche
using namespace std;
//
int main() {
	//
	int x = 0, y = 0;
	char direction;
	//
	cout << "Spustelekite klavisa\n";
	while ((direction = _getche()) != '\r') {

		switch (direction) {
		case 'n':
	y++;
	break;
		case 's':
	y--;
	break;
		case 'e':
	x++;
	break;
		case 'w':
	x--;
	break;
		default:
	cout << "\nNetinkamas simbolis. Iveskite dar karta\n";
		}
		//
	}
	cout << "Naujos koordinates: " << x << "  " << y << endl;
	//
}
