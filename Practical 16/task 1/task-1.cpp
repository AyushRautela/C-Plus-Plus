#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b)      //same function for different parameters or signature...
{
        return a+b;
}
int main()
{
        cout<<"ADD (int): "<<add<int>(1,2)<<endl;
        cout<<"ADD (float): "<<add<float>(1.1,2.2)<<endl;
        return 0;
}
