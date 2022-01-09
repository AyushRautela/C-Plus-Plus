#include<iostream>
using namespace std;
class Base{
        public:
        int add(int a,int b)
        {
                return a+b;
        }
        float add(float a, float b)
        {
                return  a+b;
        }
        float add(int a,float b)
        {
                return a+b;
        }
};
class child:public Base
{
        public:
        int add(int a,int b)
        {
                return a+b+1;
        }
};

int main()
{
 child c;
 Base b;
 cout<<"\nUsing Base Class object ...\n";
 cout<<"(int ,int) =" <<b.add(1,2)<<endl;
 cout<<"(float,float) = "<<b.add(1.1f,2.2f)<<endl;
 cout<<"(int,float) = "<<b.add(1,2.2f)<<endl;
 
 cout<<"\nUsing Child Class object ...\n";//at each call to a base class function as child class is a derived 
 cout<<"(int ,int) =" <<c.add(1,2)<<endl;//overrided class it adjusts every call to the overrided function...
 cout<<"(float,float) = "<<c.add(1.1f,2.2f)<<endl;
 cout<<"(int,float) = "<<c.add(1,2.2f)<<endl;
 return 0;
}
