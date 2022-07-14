import <iostream>;
//
int sum(int, int);       // abiejų funkcijų prototipai
int product(int, int);   // turi tiksliai sutapti
//
int main() {
	int (*pfunction) (int, int); // rodyklė į funkciją; prototipas sutampa su funkcijų sum ir product prototipais
	pfunction = product;    //  rodyklę privaloma inicializuoti
	std::cout << "10*11= " << pfunction(10, 11) << std::endl;
	pfunction = sum;       // rodyklę nukreipiame į kitą funkciją
	std::cout << "3*(4+5)+6= " <<
		pfunction(product(3, pfunction(4, 5)), 6) << std::endl;
}
//
int sum(int s1, int s2) {
	return s1 + s2;
}
//
int product(int s1, int s2) {
	return s1 * s2;
}
