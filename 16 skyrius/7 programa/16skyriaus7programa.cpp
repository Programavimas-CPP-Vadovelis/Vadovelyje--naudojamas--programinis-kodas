import <iostream>;
using std::cout;
using std::endl;
//
template <typename T, size_t startIndex=1> // 1 pastaba
class Array {
private:
	T* elements;
	size_t size;
public:
	explicit Array(size_t s) : elements{ new T[s] {} }, size{ s } {} // 2 pastaba
	~Array() {
		delete[] elements;
	}
	//
	T& operator[](size_t index) const {  // 3 pastaba
		return elements[index - startIndex];
	}

};
//
int main() {
	size_t n{5};
	const size_t startA{ 10 }; // 4 pastaba
	const size_t startB{ 1 };
	//
	Array<double, startA> a(n);  // 5 pastaba
	Array<double> b(n);          // 6 pastaba
	//
	for (size_t i{ startA }; i < startA+n; i++) { // 7 pastaba
		a[i] = i * 2;
		cout << "i= " << i << "  " << "a[i]= " << a[i] << endl;
	}
	cout << endl;
	for (size_t i{ startB }; i < startB+n; i++) {
		b[i] = i * 2;
		cout << "i= " << i << "  " << "b[i]= " << b[i] << endl;
	}
	//
}
