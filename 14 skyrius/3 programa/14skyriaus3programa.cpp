import <iostream>;
//
class Base {
protected:
	int data1, data2;
public:
	virtual int product() = 0;
	void setData(int d1, int d2) {
		data1 = d1; 
		data2 = d2;
	}
};
//
void showProduct( Base& b ) {  // globali funkcija
	std::cout << b.product() << std::endl;
}
//
class Derived1 : public Base {
private:
	int product() override {
		return data1 * data2;
	}
};
// 
class Derived2 : public Base {
private:
	int product() override {
		return data1 * data1 * data2 * data2;
	}
};
//
int main() {
	Derived1 d1; d1.setData(2, 3);
	Derived2 d2; d2.setData(4, 5);
	//
	showProduct( d1 );
	showProduct( d2 );
	//
}
