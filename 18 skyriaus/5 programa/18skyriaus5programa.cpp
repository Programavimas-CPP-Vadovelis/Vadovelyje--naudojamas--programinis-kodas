
import <iostream>;
import <span>;
using std::cout;
using std::endl;

template <typename T>
void printContainer( std::span<T> container ) {
	for (const auto c : container)
		cout << c << "  ";
	cout << endl;
}
//
template <typename T>
void modifyContainer(std::span<T> container) {
	for (auto& c : container) 
		c *= 2;
}
//
int main() {
	auto pi = std::make_unique<int[]>(10); // dinaminis masyvas iš 10 elementų
	for (size_t i{}; i < 10; i++) pi[i] = static_cast<int>(i); // masyvo elementų reikšmių formavimas
	printContainer<int>({ pi.get(),10 }); // taip formuojamas bevardis span objektas funkcijos argumentų sąraše
	std::span<int> container({ pi.get(), 10 }); // įvardintas span objektas
	modifyContainer<int>(container);
	printContainer<int>(container);
}
