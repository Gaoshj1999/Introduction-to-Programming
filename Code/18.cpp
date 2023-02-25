#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    a=a>b?a:b;
    a=a>c?a:c;
    return a;
}
int main()
{
    int a,b,c,result;
    cout<<"请输入a,b,c"<<endl;
    cin>>a>>b>>c;
    result=max(a,b,c);
    cout<<result;  
}
