import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Message {
private:
	char* message;
public:
	Message( const char* text = "Default message" ) {
		cout << "Konstruktorius\n";
		message = new char[strlen(text) + 1];
		size_t i;
		for ( i = 0; i < strlen(text); i++ )
			message[i] = text[i];
		message[i] = '\0';
	}
	//
	~Message() {
		cout << "Destruktorius\n";
		delete message; // galima ir taip: delete [] message;
	}
	//
	void showMessage(){
		cout << message << endl;
	}
};
//
int main() {
	Message ma("The 1st message");
	Message* mp1 = new Message("The 2nd message");
	Message* mp2 = new Message;
	//
	ma.showMessage();
	mp1->showMessage();
	mp2->showMessage();
	//
	delete mp1;
	delete mp2;
	//
}
