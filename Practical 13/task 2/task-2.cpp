#include<iostream>
using namespace std;
class Base{
        public:
        int sub(int a,int b);
        virtual int add(int a,int b)//due to virtual "keyword" ignored (left for runtime binding)...
        {
                return a+b;
        }
       
        virtual int multi(int a,int b)=0;//due to abstraction Compiler will not bind this at compile time...
        
};
class child:public Base
{
        public:
        virtual int add(int a,int b)//this is executed(b->add(1,2))// if "int add(int a, float b) then always base class function's binding takes place...
        {
                return a+b+1;
        }
        int multi(int a,int b)//if we dont write this defination of a pure virtual function then this class also becomes abstracted...
        {
                return a*b;
        }
};

int main()
{
 child c;
 Base *b;
 b=&c;
 //cout<<c.add(11.4,1.3)<<endl;
 //if we have "virtual int add(int a, float b){return a+b+1} "since parameters are change Ambiguty...it will bind base class defination...
 cout<<b->add(1,2)<<endl;//runtime binding as (&c) always binds child class defination..
 cout<<b->multi(2,3)<<endl;//runtime binding
 //cout<<c.add(1,2)<<endl;
 //cout<<c.multi(2,3);
 //virtual comes into play when there are two definations with same name and signature in base and child class...
 
 return 0;
}
