#include<iostream>
using namespace std;
int turn(int a)
{
    int change=0,i=1;
    while(a!=0)
    {
        if(a%2!=0) change+=i;
        i*=2;
        a/=10;
    }
    return change; 
}
int main()
{
    int a,result;
    cout<<"please enter a number"<<endl;
    cin>>a;
    result=turn(a);
    cout<<"the change number is:"<<result<<endl;
    return 0;
}