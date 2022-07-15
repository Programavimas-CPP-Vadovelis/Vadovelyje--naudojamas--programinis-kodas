import <iostream>;
import <stack>;
import <queue>;
using std::cout;
using std::endl;
//
int main() {
	// 
	cout << "LIFO\n";
	std::stack<int> s;
	for (int i{}; i < 10; i++)  
s.push(i);
	while (!s.empty()) {
		cout << s.top() << " "; // top() grąžina paskutinį elementą
		s.pop();  // void pop() tik pašalina elementą
	}
	cout << endl;
	//
	cout << "FIFO\n";
	std::queue<int> q;
	for (int i{}; i < 10; i++)  
q.push(i);
	while (!q.empty()) {
		cout << q.front() << " "; // front() grąžina pirmą elementą
		q.pop();
	}
	cout << endl;
}
