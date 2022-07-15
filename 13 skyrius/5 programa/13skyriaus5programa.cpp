import <iostream>;
using std::cout;
using std::endl;
//
class Stack {
protected:
	int stack[3];
	int top; // ne size_t: top gali būti neigiamas
public:
	Stack() : top(-1) { }
	//
	~Stack() { }
	//
	void push(int var) { stack[++top] = var; }
	int pop() { return stack[top--]; }
};
//
class SafeStack : public Stack {
public:
	void push(int var) {
		if (top >= 2) {
			cout << "Stack full" << endl;
			exit(1);
		}
		Stack::push(var);  //  pastaba
	}
	int pop() {
		if (top < 0) {
			cout << "Stack empty" << endl;
			exit( 2);
		}
		return Stack::pop();  //   pastaba
	}

};
//
int main() {
SafeStack s;
//
s.push(11); s.push(22);	s.push(33);
//
cout<< s.pop() << endl << s.pop() << endl << s.pop() << endl << s.pop() << endl;
	//
}
