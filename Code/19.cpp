#include<iostream>
using namespace std;
int pow(int a,int n);
int main()
{
    int a,n,result;
    cout<<"请输入数字："<<endl;
    cin>>a;
    cout<<"请输入希望的次方"<<endl;
    cin>>n;
    result=pow(a,n);
    cout<<"答案是："<<result<<endl;
    return 0;
}
int pow(int a,int n)
{ 
    int result=1,i;
    for(i=1;i<=n;i++)
    {
        result*=a;
    }
    return result;
}