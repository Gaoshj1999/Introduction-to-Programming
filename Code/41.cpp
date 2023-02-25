#include<iostream>
using namespace std;
int max1(int a,int b)
{
    return a>b?a:b;
}
int max1(int a,int b,int c)
{
    int t;
    t=a>b?a:b;
    return t>c?t:c;
}
double max1(double a,double b)
{
    return a>b?a:b;
}
double max1(double a,double b,double c)
{
    double t;
    t=a>b?a:b;
    return t>c?t:c;
}
int main()
{
    int a,b;
    cout<<"请输入两个数字："<<endl;
    cin>>a>>b;
    cout<<"两个数字中较大的一个为："<<max1(a,b)<<endl;
    double x,y;
    cout<<"请输入两个浮点数："<<endl;
    cin>>x>>y;
    cout<<"两个数字中较大的一个为"<<max1(x,y)<<endl;
    return 0;
}