import <iostream>;
import <span>;
import <vector>;
import <array>;
using std::cout;
using std::endl;

template <typename T>
void printContainer(std::span<T> container) {
	for (const auto c : container)
		cout << c << "  ";
	cout << endl;
}
//
int main() {
	int ia[]{ 1,2,3,4,5 };
	std::vector<double> v{ 1.1,2.2,3.3 };
	std::array af{ 10.1f,20.2f,30.3f };
	//
	printContainer<int>(ia);
	printContainer<double>(v);
	printContainer<float>(af);
}
