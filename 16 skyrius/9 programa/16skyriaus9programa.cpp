import <iostream>;
import <concepts>;
using std::cout;
using std::endl;
//
template <typename T>
concept  Incrementable = requires (T t) { 
	t++; t--; 
};
//
template <Incrementable T>
void Function(T t) {
	t += 1;
	cout << t << endl;
}
//
int main() {
	//
	Function<int>(1);
	Function<double>(2.3);
	Function<char>('A');
	// Function<bool>(true); // klaida
	// Function<std::string>("abc"); // klaida
}
