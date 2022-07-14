namespace CircleLength {
	const float PI = 3.14159f;
	float circle( float r ) {
		return 2.f*PI*r;
	}
}


import <iostream>;
#include "Circle.h"
using std::cout;
using std::cin;
using std::endl;
//
using namespace CircleLength;
//
int main() {
 
float r;
cout << "Iveskite spinduli: ";
cin >> r;
cout << "Spindulio " << r << " apskritimo ilgis yra " << circle(r) << endl;
 
}
