#include<iostream>
using namespace std;
unsigned fac(unsigned n);
int main()
{
    int x;
    cout<<"请输入一个数字："<<endl;
    cin>>x;
    cout<<"x的阶层为："<<fac(x)<<endl;
    return 0;
}
unsigned fac(unsigned n)
{
    if(n!=0)
    {
        return n*fac(n-1);
    }
    else
    {
        return 1;
    }
    
}