#include<iostream>
using namespace std;
class  A{

          public:
                ~A()//in the last parent class destructor is called
                {
                        cout<<"constructor of A\n";
                }
          
};
class B: private A  
{
          public:
               ~B()
                {
                  cout<<"constructor of B\n";
                }
        
};
class C:public B{
        public:
        ~C()//first child class destructor is called..
        {   
                cout<<"constructor of C\n";
        }
};
int main()
{
     C obj;
}
