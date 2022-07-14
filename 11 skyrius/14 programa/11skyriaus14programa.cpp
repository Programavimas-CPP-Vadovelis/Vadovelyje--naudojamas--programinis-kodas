import <iostream>;
using std::cout;
using std::cin;
using std::endl;
//
class Vertex {
private:
	double x, y;
public:
	Vertex() : x(0.), y(0.) { }
	Vertex(double xx, double yy) : x(xx), y(yy) { }
	~Vertex() { }
	//
	void getVertex(char c) {
		cout << "Virsunei  " << c << "  ";
		cin >> x >> y;
	}
	void showVertex(char c) {
cout << "Virsunes " << c << "  x=  " << x << "  y= " << y << endl;
	}
	double rx() {
		return x;
	}
	double ry() {
		return y;
	}
};
//
class Triangle {
private:
Vertex a, b, c;
public:
Triangle() : a(0., 0.), b(0., 0.), c(0., 0.) { }  // kviečiami Vertex 
			              // konstruktoriai su argumentais
Triangle(double ax, double ay, double bx, double by, double cx, double cy):
	    a(ax, ay), b(bx, by), c(cx, cy) { }  // Vertex konstruktoriai
~Triangle() { }
//
void getTriangle() {
	cout << "\nIveskite virsuniu koordinates\n";
	a.getVertex('a'); // kviečiami Vertex metodai
	b.getVertex('b');
	c.getVertex('c');
}
void showTriangle() {
	cout << "\nVirsuniu koordinates\n";
	a.showVertex('a'); // kviečiami Vertex metodai
	b.showVertex('b');
	c.showVertex('c');
}
//
double area() {
	return ((b.rx() * c.ry() - c.rx() * b.ry() // kviečiami Vertex metodai
	        - a.rx() * c.ry() + c.rx() * a.ry()
	        + a.rx() * b.ry() - b.rx() * a.ry()) / 2.);
}
};
//
int main() {
	Triangle t(0., 0., 5., 0., 0., 1.);
	//
	t.showTriangle();
	//
	cout << "\nTrikampio plotas " << t.area() << endl;
	//
}
