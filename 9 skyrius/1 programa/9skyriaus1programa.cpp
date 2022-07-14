import <iostream>;
import <cstring>;
using std::cout;
using std::endl;
//
int main() {
	char e1[] = "Pirmoji eilute";
	char e2[80];
	//
	unsigned int i;
	for (i = 0; i < strlen(e1); i++)
		e2[i] = e1[i];
	e2[i] = '\0';   // 1 pastaba
	//
	cout << "Antroji eilute  " << e2 << endl;
	//
}
