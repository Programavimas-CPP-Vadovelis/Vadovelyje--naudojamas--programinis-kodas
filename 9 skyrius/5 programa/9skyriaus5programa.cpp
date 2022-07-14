struct vertex {
	double x, y;
};
//
struct triangle {
	vertex a, b, c;
};


#include <iostream>
#include "trikampis.h"
//
int main( ) {
	  triangle t;
	  std::cout<<"Iveskite virsuniu koordinates x ir y: ";
	  std::cin>>t.a.x>>t.a.y
	          >>t.b.x>>t.b.y
	          >>t.c.x>>t.c.y;
	  std::cout<<"Trikampio virsuniu koordinates yra:\n" 
	           <<t.a.x<<"  "<<t.a.y<<endl
	           <<t.b.x<<"  "<<t.b.y<<endl
	           <<t.c.x<<"  "<<t.c.y<<endl;
	  std::cout<<"Trikampio plotas yra:\n"
	           <<( t.b.x*t.c.y - t.c.x*t.b.y
		   -t.a.x*t.c.y + t.c.x*t.a.y
		   +t.a.x*t.b.y - t.b.x*t.a.y )/2.
	           <<std::endl<<std::endl;
}
