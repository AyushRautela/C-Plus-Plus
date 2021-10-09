#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string a;
string b;
getline(cin,a);
getline(cin,b);
int l1=strlen(a.c_str());
int l2=strlen(b.c_str());
cout<<"Length of string l1 :"<<l1<<endl<<"Length of string l1 :"<<l2<<endl;
if(l1==l2)
cout<<"String are equal"<<endl;
else if(l1<l2)
cout<<"String a is less then string b"<<endl;
else if(l1>l2)
cout<<"String b is less then string a"<<endl;
return 0;
}

