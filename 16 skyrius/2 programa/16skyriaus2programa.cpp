import <iostream>;
import <format>;
using std::cout;
using std::endl;
using std::string;
using std::format;
//
template <typename T> const T& larger(const T& t1, const T& t2);
//
int main() {
//
int i1{ 1 }, i2{ 2 };
cout << format("Didesnis is  {} ir {} yra {}\n",i1, i2, larger(i1,i2) );
//
double d1{ 1. }, d2{ 2. };
cout << format("Didesnis is  {:5.2f} ir {:5.2f} yra {:5.2f}\n",d1,d2,larger(d1,d2));
//
string s1{ "abc" }, s2{ "zbc" };
cout << format("Didesnis is  {} ir {} yra {}\n", s1, s2, larger(s1, s2));
}
//
template <typename T> 
const T& larger(const T& t1, const T& t2) {       
	return t1 < t2 ? t2 : t1;
}
