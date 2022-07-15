import <iostream>;

int main(){
	char text[]{ "hello" };
	std::string str1{ text };
	std::string str2{ str1 };

	std::cout << text << ' ' << str1 << ' ' << str2 << std::endl;
}
