#include<iostream>
using namespace std;
void fn1();
int x=1,y=2;
int main()
{
    cout<<"Begin"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"evaluate x and y in the main()"<<endl;
    int x=10,y=20;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"step into fn1()"<<endl;
    fn1();
    cout<<"back into main"<<endl;
    cout<<"x="<<x<<endl;
    return 0;
}
void fn1()
{
    int y=200;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}