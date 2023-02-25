#include<iostream>
using namespace std;
int fab(int n);
int main()
{
    int n;
    cout<<"请输入第几阶斐波那契数："<<endl;
    cin>>n;
    cout<<"值为："<<fab(n)<<endl;
    return 0;
}
int fab(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fab(n-1)+fab(n-2);
    }
    
}