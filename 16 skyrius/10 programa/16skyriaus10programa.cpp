import <iostream>;
import <concepts>;
using std::cout;
using std::endl;
//
template <typename T>
concept  Incrementable = requires (T t) { 
	t++; t--; 
};
template <typename T>
concept EvenOdd = requires (T t) {
	t % 2;
};
//
template <typename T> requires Incrementable<T> && EvenOdd<T>
class Class {
private:
	T t;
public:
	void Function(T t) {
		t += 1;
		cout << t << endl;
	}
};
//
int main() {
	//
	Class<int> ci; ci.Function(1);
	//Class<double> cd; cd.Function(2.3); // klaida: double nepalaiko % operacijos
	Class <char> cc; cc.Function('A');
}
