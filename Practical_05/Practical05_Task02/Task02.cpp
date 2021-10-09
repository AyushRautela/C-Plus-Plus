#include<iostream>
using namespace std;
 
int main()
{
int a=10;
cout<<"int - "<<a<<endl;
bool b=true;
cout<<"bool - "<<b<<endl;
short s = 5000;
cout<<"short - "<<s<<endl;
char ch ='D';
cout<<"char - "<<ch<<endl;
float f = 5.99f;
cout<<"float - "<<f<<endl;
long l = 15000000000L;
cout<<"long - "<<l<<endl;
double d = 19.99d;
cout<<"double - "<<d<<endl;
long double ld=13.99999999999999;
cout<<"long double - "<<ld<<endl;
 wchar_t w  = L'A';
 cout<<"wide char - "<<w<<endl;
 
	cout << "Size of int : " << sizeof(int)<< " bytes" <<"	Size of a : "<<sizeof(a)<<endl;
	cout << "Size of bool : " << sizeof(bool)<< " byte" << "	Size of b : "<<sizeof(b)<<endl;
	cout << "Size of short : " << sizeof(short)<< " bytes" <<"	Size of s : "<<sizeof(s)<< endl;
	cout << "Size of char : " << sizeof(char)<< " byte" << "	Size of ch : "<<sizeof(ch)<<endl;
	cout << "Size of float : " << sizeof(float)<< " bytes"<<"	Size of f : "<<sizeof(f)<<endl;
	cout << "Size of long : " << sizeof(long)<< " bytes" <<"	Size of l : "<<sizeof(l)<< endl;
	cout << "Size of double : " << sizeof(double)<< " bytes"<<"  	Size of d : "<<sizeof(d) << endl;
	cout << "Size of long double : " << sizeof(long double)<< " bytes"<<"    Size of ld : "<<sizeof(ld) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)<< " bytes" <<"    Size of w : "<<sizeof(w)<<endl;
     
	return 0;
}
