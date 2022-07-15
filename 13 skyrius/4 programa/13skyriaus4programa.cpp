int main( ){
	CounterDown c1, c2{ 10 };
	//
	++c2; 
	//    
	c1 = c2;
	//
	CounterDown c3 = --c1; 
	//					
	//CounterDown c4 = ++c1; // dabar nebegalimas
	CounterDown c4 = static_cast<CounterDown>( ++c1 ); // išreikštinis tipų pertvarkymas; rekomenduojamas stilius        
	//                    
	Counter c5 = static_cast<Counter>( c1 ); // išreikštinis pertvarkymas
	//   
	cout<<"c1: "<<c1.returnCount( )<<endl;
	cout<<"c2: "<<c2.returnCount( )<<endl;
	cout<<"c3: "<<c3.returnCount( )<<endl;
	cout<<"c4: "<<c4.returnCount( )<<endl;
	cout<<"c5: "<<c5.returnCount( )<<endl;
	//
}
