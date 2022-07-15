import <iostream>;
import <format>;
using std::cout;
using std::format;

const auto& larger(const auto& t1, const auto& t2) { return t1 < t2 ? t2 : t1; }
//
int main() {
//
int i1{ 1 };
double d1{ 2.5 };
cout << format("Didesnis is  {} ir {} yra {:5.2}\n", i1, d1, larger(i1, d1));
//
}
