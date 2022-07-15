import <iostream>;
using std::cout;
using std::endl;
//
class SafeStack {
private:
	int stack[3];
	int top;
public:
	class Full { }; // klaidos klasė atvejui, kai dėklas pilnas
	class Empty { }; // klaidos klasė atvejui, kai dėklas tuščias
	//
	SafeStack() : top(-1) { }
	//
	~SafeStack() { }
	//
	void push(int var) {
		if (top >= 2)  throw Full(); // sukuriamas Full objektas
		stack[++top] = var;
	}
	//
	int pop() {
		if (top < 0) throw Empty(); // sukuriamas Empty objektas
		return stack[top--];
	}
};
//
int main() {
	SafeStack s;
	//
	try {
		s.push(11);
		s.push(22);
		s.push(33);
		//
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
	}
	catch (SafeStack::Full) { // „sugaunamas“ Full objektas
		cout << "Klaida: deklas pilnas\n";
	}
	catch (SafeStack::Empty) { // „sugaunamas“ Empty objektas
		cout << "Klaida: deklas tuscias\n";
	}
	//
}
