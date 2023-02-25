#include<iostream>
using namespace std;
int length(int x, int y=10,int z=10);
int main()
{
    int x;
    int a=2,b=3;
    cout<<"请输入边长:"<<endl;
    cin>>x;
    if(x==10)
    cout<<"正方体的体积为："<<length(x)<<endl;
    else
    {
        cout<<"长方体的体积为："<<length(x)<<endl;
    }
    cout<<"规定一个边长时："<<length(x,a)<<endl;
    cout<<"规定两个边长时："<<length(x,a,b)<<endl;
    return 0;
}
int length(int x,int y,int z)
{
    return x*y*z;
}