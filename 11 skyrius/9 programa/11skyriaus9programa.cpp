import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Message {
private:
	char* message;
public:
	Message(const char* text = "Default message") {
		cout << "Metodas-konstruktorius\n";
		size_t sText = strlen(text) + 1;
		message = new char[sText];
		strcpy_s(message, sText, text);
	}
	//
	~Message() {
		cout << "Destruktorius\n";
		delete[] message; // veiks ir be [ ]
	}
	//
	void showMessage() {
		cout << message << endl;
	}
};
//
int main() {
	Message m1("The 1st message");
	Message m2(m1);
	//
	m1.showMessage();
	m2.showMessage();
	//
}
