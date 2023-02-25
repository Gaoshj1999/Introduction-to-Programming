#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"please input a number"<<endl;
    cin>>a;
    for(i=2;i<=a;i++)
    {
        if(a%i==0) cout<<i<<endl;

    }
    return 0;
}