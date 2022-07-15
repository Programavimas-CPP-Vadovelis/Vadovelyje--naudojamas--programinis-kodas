import <iostream>;
using std::cout;
using std::endl;
//
class Distance {
private:
	int feet;
	double inches;
public:
	Distance() : feet(0), inches(0.f) { }
	Distance(int f, double in) : feet(f), inches(in) { }
	//
	~Distance() { }
	//
	void showDistance() const {
		cout << "Distance: " << feet << "  " << inches << endl;
	}
	//
	Distance operator+ (const Distance& d) const {
		int ft = feet + d.feet;
		double in = inches + d.inches;
		if (in >= 12.) {
			in -= 12.f;
			ft++;
		}
		return Distance(ft, in);
	}
};
//
int main() {
	//
	Distance d3, d4;
	Distance d1(1, 1.);
	Distance d2(10, 10.);
	//
	d3 = d1 + d2;
	d4 = d1 + d2 + d3;
	//
	d1.showDistance();
	d2.showDistance();
	d3.showDistance();
	d4.showDistance();
	//
}
