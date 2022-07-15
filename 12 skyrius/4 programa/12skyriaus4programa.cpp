export module distance;
//
import <iostream>;
using std::cout;
using std::endl;
//
export class Distance {
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
	//
	bool operator< (const Distance& d) const {
		double temp1 = feet + inches / 12.;
		double temp2 = d.feet + d.inches / 12.;
		if (temp1 < temp2)
			return true;
		else
			return false;
	}
	//
	bool operator== (const Distance& d) const = default;
	//
	void operator+= (const Distance& d) {
		feet += d.feet;
		inches += d.inches;
		if (inches >= 12.) {
			inches -= 12.;
			feet++;
		}
	}
	//
	friend std::ostream& operator<<(std::ostream& stream, const Distance& d ){
		stream << "Distance: " << d.feet << "  " << d.inches << endl;
		return stream;
	}
};



import <iostream>;
import distance;
using std::cout;
using std::endl;
//
int main() {
	//
	Distance d1(1, 1.), d2(10, 10.), d3(11, 11.);
	//
	Distance d4 = d1 + d2; // kviečiamas perkrautasis metodas „+“
	if (d4 == d3) cout << "d4 == d3\n"; // metodo „==” kvietimas
	if (d4 < d2) cout << "d4 <d2\n"; // metodo „<“ kvietimas
	else cout << "d4 >= d2\n\n"; 
d1 += d2; // metodo „+=” kvietimas
	//
	cout << "d1 " << d1; // perkrautojo metodo „<<“ kvietimas;
	cout << "d2 " << d2; // šis metodas kviečiamas vietoje
	cout << "d3 " << d3; // antrojo operatoriaus <<
	cout << "d4 "; d4.showDistance(); // veikia ir išvesties metodas
	//
}
