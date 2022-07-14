import <iostream>;
using std::cout;
using std::endl;
//
int main() {
	//
	int array[] = { 10,20,30,40,50 };
	size_t i, n = (sizeof array) / (sizeof array[0]);
	int* p = array; // rodyklę nukreipiame į masyvo pirmojo elemento 
		    // pirmojo baito adresą
	//
	// 1 būdas
	for (i = 0; i < n; i++)
		cout << array[i] << "  ";
	cout << endl;
	//
	// 2 būdas
	for (i = 0; i < n; i++)
		cout << p[i] << "  ";
	cout << endl;
	//
	// 3 būdas
	for (i = 0; i < n; i++)
		cout << *(p + i) << "  ";
	cout << endl;
	//
	// 4 būdas
	for (i = 0; i < n; i++)
		cout << *(array + i) << "  ";
	cout << endl;
	//
	// 5 būdas
	for (i = 0; i < n; i++)
		cout << *p++ << "  ";
	cout << endl;
	//
	// klaidingas būdas
	//for( i = 0; i < n; i++ )
	//	cout<<*array++<<"  ";
	//cout<<endl;
	//
}
