struct BirthDate {

	unsigned int Year:12;	
	unsigned int Month:4;
    	unsigned int Day:5;	//1 pastaba	

};
//
struct Student {
	char FirstName[ 80 ];
	char SecondName[ 80 ];
	BirthDate StudentBirthDate; //įdėtinė struktūra

};


#include <iostream>
#include "nested.h"
//
using namespace std;
//
int main( ) {
	  Student Informatics;
	  strcpy_s( Informatics.FirstName, "Saulius");
	  strcpy_s( Informatics.SecondName, "Petraitis");
//
	  Informatics.StudentBirthDate.Year = 2010;
	  Informatics.StudentBirthDate.Month = 11;
	  Informatics.StudentBirthDate.Day = 35;  //2 pastaba
//
  	cout<<"Studentas:\n" 
	      <<Informatics.FirstName<<"  "
            	     <<Informatics.SecondName<<endl;
	cout<<"Gimes:\n"     //2 pastaba	
	        <<Informatics.StudentBirthDate.Year
 	        <<"  "<<Informatics.StudentBirthDate.Month
	        <<"  "<<Informatics.StudentBirthDate.Day<<endl;
       //
}
