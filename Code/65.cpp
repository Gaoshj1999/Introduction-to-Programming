#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"please enter a number"<<endl;
    cin>>i;
    if(i>3)
    {
        int i=7;
        cout<<i<<endl;//这说明了如果在定义局部变量与全局变量同名时，在局部使用的是局部变量
    }
    cout<<i<<endl;
    return 0;
}