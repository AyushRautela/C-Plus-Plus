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
        int multi(int a,int b)
        {
        return a*b;
        }
};
class child:public Base
{
        public:
        using Base:: add;
        int add(int a,int b)
        {
                return a+b+1;
        }
};

int main()
{ 
 child c;
 
 cout<<"\nUsing Child Class object ...\n"; 
 cout<<"add(int ,int) =" <<c.add(1,2)<<endl;
 cout<<"add(float,float) = "<<c.add(1.1f,2.2f)<<endl;
 cout<<"add(int,float) = "<<c.add(1,2.2f)<<endl;
 cout<<"multi(int,int) = "<<c.multi(2,3)<<endl;
 return 0;
}
