#include<iostream>
using namespace std;
class  A{

          public:
                A()//constructor A is THIRD called but firstly executed
                {
                        cout<<"constructor of A\n";
                }
          
};
class B: private A  //Private
{
          public:
                B()//constructor B is SECOND called
                {
                  cout<<"constructor of B\n";
                }
        
};
class C:public B{
        public:
        C()//constructor C is FIRST called but lastely executed
        {   
                cout<<"constructor of C\n";
        }
};//every constructor is executed after its parent class is executed...
int main()
{
     C obj;
}
