import <iostream>;
using std::cout;
//
int main( ) {
	//
      int k1 = 10;      // šioje vietoje ir ...
      int k3 = 50;
	  //
      cout<<"Isorinis k1 = "<<k1<<endl;
	  //
	{
	      int k1 = 20;  // ... čia vardai tie patys, bet kintamieji skirtingi
	      int k2 = 30;
 	      cout<<"Vidinis k1 = "<<k1<<endl;
	      k1+=100;
	      k3+=100;
	}
	//
       cout<<"Isorinis k1 = "<<k1<<endl
              <<"Isorinis k3 = "<<k3<<endl;
       //cout<<"Vidinis k2 = "<<k2<<endl;  // klaida! k2 nematomas: jo nebėra
      //
}
