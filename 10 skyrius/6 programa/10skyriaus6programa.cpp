import <iostream>;
import <format>;
using std::cout;
using std::endl;
using std::format;
//
int main() {
	// Burbulo algoritmo funkcijos prototipas
	void bubbleSort(size_t, double*);
	//
	double array[] = { 32., 70., 0., -45., 15. };
	//
	size_t n = (sizeof array) / (sizeof array[0]);
	//
	cout << "Pradinis masyvas:\n";
	for (auto array_i : array)
		cout << format("{:+#12.2f}  ", array_i);
	cout << endl;
	//
	bubbleSort(n, array);
	//
	cout << "Isrikiuotas masyvas:\n ";
	for (auto array_i : array)
		cout << format("{:+#12.2f}  ", array_i);
	cout << endl;
	//
}
//
void bubbleSort(size_t n, double* p) {
	// 2 skaičių rikiavimo funkcijos prototipas
	void sort2numbers(double*, double*);
	//
	for (size_t i = 0; i < n - 1; i++)
		for (size_t j = i + 1; j < n; j++)
			sort2numbers(p + i, p + j);
}
//
void sort2numbers(double* n1, double* n2) { // elementai atiduodami rodykle
	if (*n1 > *n2) {
		double temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
}
