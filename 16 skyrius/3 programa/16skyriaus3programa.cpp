import <iostream>;
import <format>;
using std::cout;
using std::format;

template <typename R, typename T1, typename T2>
R larger(const T1& t1, const T2& t2) {
	return static_cast<R> (t1 < t2 ? t2 : t1);
}
//
int main() {
	//
	int i1{ 1 };
	double d1{ 2. };
	cout << format("Didesnis is  {} ir {} yra {:5.2f}\n", 
i1, d1, larger<double, int, double>(i1, d1));
	//
}
