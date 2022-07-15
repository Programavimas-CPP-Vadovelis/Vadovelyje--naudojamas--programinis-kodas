import <iostream>;
import <concepts>;
using std::cout;
using std::endl;
//
template <std::integral T>
void Function(T t) {
	t += 1;
	cout << t << endl;
}
//
int main() {
	//
	Function<int>(1);
	Function<long long>(2L);
	//Function<double>(2.3); // klaida
	Function<char>('A');
	// Function<bool>(true); // klaida
	// Function<std::string>("abc"); // klaida
}
