#include "Mystring.h"

void main()
{
	Mystring s1;
	Mystring s2("s2");
	Mystring s2_2 = NULL;
	Mystring s3 = s2;
	Mystring s4 = "s444444";


	s4 = s2;
	s4 = "s22222";

	s4[0]='4';
	
	//char& operator[](int index);
	//Mystring& operator=(const char* p);
	//Mystring& operator=(const Mystring &s);
	//ostream& operator<<(ostream & out, Mystring & s);


	return;
}
