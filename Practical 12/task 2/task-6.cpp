#include<iostream>
using namespace std;
class  A{

          public:
                int x;
          protected:
                int y;
          private:
                int z;
};
class B: private A  //Private
{
          public:
                B()
                {
                   x=21;
                   y=22;
                   //z=23;//error private of base class
                }
         void display(){
                cout<<x<<" "<<y<<" "<<endl;
                }
};
int main()
{
        B o;
        o.display();
        //o.x=30;  //error as x is in private of B class
        //o.y=40; //error as y is in private of B class
        //o.z=50; //error as private of parenet A class 
        o.display();
}
