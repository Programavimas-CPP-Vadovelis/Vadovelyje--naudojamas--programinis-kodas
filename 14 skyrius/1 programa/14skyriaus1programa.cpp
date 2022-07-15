import <iostream>;
//
class Shape {
protected:
	double x, y;
	int color;
public:
	void getData() {
		std::cout << "Iveskite x, y, color: ";
		std::cin >> x >> y >> color;
	}
	void showData() {
		std::cout << "\nCentras: " << x << "  " << y << std::endl;
		std::cout << "Spalva: " << color << std::endl;
	}
};
//
class Square : public Shape {
private:
	double side;
public:
	void getData() {
		Shape::getData();
		std::cout << "Iveskite kvadrato krastine: ";
		std::cin >> side;
	}
	void showData() {
		Shape::showData();
		std::cout << "Kvadrato krastine: " << side << std::endl;
	}
};
//
class Rectangle : public Shape {
private:
	double sideA, sideB;
public:
	void getData() {
		Shape::getData();
		std::cout << "Iveskite staciakampio krastines: ";
		std::cin >> sideA >> sideB;
	}
	void showData() {
		Shape::showData();
		std::cout << "Staciakampio krastines: " << sideA << "  " 
		          << sideB << std::endl;
	}
};
//
class Triangle : public Shape {
private:
	double sideA, sideB, sideC;
public:
	void getData() {
		Shape::getData();
		std::cout << "Iveskite trikampio krastines: ";
		std::cin >> sideA >> sideB >> sideC;
	}
	void showData() {
		Shape::showData();
		std::cout << "Trikampio krastines: " << sideA << "  " 
          << sideB << "  " << sideC << std::endl;
	}
};
//
int main() {
	Square s;
	Rectangle r;
	Triangle t;
	//
	s.getData();
	r.getData();
	t.getData();
	//
	s.showData();
	r.showData();
	t.showData();
	//
}
