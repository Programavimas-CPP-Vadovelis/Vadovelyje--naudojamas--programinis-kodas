import <iostream>;
import <string_view>;

int main(){
	std::string_view text{ "hello" };
	std::string_view str1{ text };
	std::string_view str2{ str1 };

	std::cout << text << ' ' << str1 << ' ' << str2 << '\n';
}
