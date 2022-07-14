import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Message {
private:
	char message[81];
public:
	Message(const char* text = "Default message") {
		cout << "Metodas-konstruktorius\n";
		size_t sText = strlen(text) + 1;
		strcpy_s(message, sText, text);
	}
	//
	~Message() {
		cout << "Destruktorius\n";
	}
	//
	Message(Message m) { // kopijuojantysis konstruktorius
		cout << "Kopijuojantysis konstruktorius\n";
		size_t sMessage = strlen(m.message) + 1;
		strcpy_s(message, sMessage, m.message);
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
	Message m3 = m2;
	//
	m1.showMessage();
	m2.showMessage();
	m3.showMessage();
	//
}
