import <iostream>;
using namespace std;
//
namespace Student {
int setBooks(int nBooks) {
	return nBooks;
}
int  Books;
struct Person {  //duomenų struktūra vardų srityje Student 
	unsigned short HasBooks;
	unsigned short Nr;
	unsigned int Age;
};
}

//
int Books;	// globalusis kintamasis
//
int main() {
using namespace Student; // vardų sritis Student matoma tik main funkcijoje
//
Person Saulius;    // struktūros Saulius laukų reikšmės lieka neapibrėžtos!
Saulius.HasBooks = setBooks(2);  // taip priskiriama reikšmė struktūros laukui
//
//{
int Books;	  // čia - lokalusis Books, matomas tik main funkcijoje
cout << "Iveskite lokaluju kintamaji\n";
cin >> Books;	  // lokaliam kintamajam priskiriama klaviatūra įvesta reikšmė
cout << "Iveskite globaluji kintamaji\n";
cin >> ::Books;   // jei prieš priklausomybėsoperatorių :: vardo nėra - tai laikoma globaliąja vardų sritimi
cout << "Iveskite vardu srities kintamaji\n";
cin >> Student::Books; // vardų srities Student kintamajam Books priskiriama klaviatūra įvesta reikšmė
//}
cout << "Lokalusis kintamasis Books:             " << Books << endl;
cout << "Globalusis kintamasis Books:            " << ::Books << endl;
cout << "Vardu srities Student kintamasis Books: " << Student::Books << endl;
//
}
