import <iostream>;
using std::cout;
using std::endl;
//
template <typename T>
class SafeStack {
private:
	T stack[3];
	int top;
public:
	SafeStack();
	~SafeStack();
	//
	void push(T);
	T pop();
};
//
template<typename T>  // būtina kartoti reikšminį žodį
SafeStack<T>::SafeStack() { top = -1; } // būtina nurodyti klasės realizaciją 
//
template <typename T>
SafeStack<T>::~SafeStack() { }
//
template <typename T>
void SafeStack<T>::push(T value) {
	if (top >= 2) {
		cout << "Stack full\n";
		exit(- 1);
	}
	stack[++top] = value;
}
//
template <typename T>
T SafeStack<T>::pop() {
	if (top < 0) {
		cout << "Stack empty\n";
		exit(- 2);
	}
	return stack[top--];
}
//
//
int main() {
	SafeStack < float > s1;
	SafeStack < int > s2;
	//
	s1.push(1.2f);
	s1.push(3.4f);
	cout << "s1: " << s1.pop() << endl;
	cout << "s1: " << s1.pop() << endl;
	//
	s2.push(1);
	s2.push(2);
	cout << "s2: " << s2.pop() << endl;
	cout << "s2: " << s2.pop() << endl;
	//
}
