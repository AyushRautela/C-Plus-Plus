#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string a;
string b;
getline(cin,a);
getline(cin,b);
int x=a.compare(b);
cout<<x<<endl;
if(x==0)
cout<<"String are equal"<<endl;
else if(x<0)
cout<<"String a is less then string b"<<endl;
else if(x>0)
cout<<"String b is less then string a"<<endl;
return 0;
}


