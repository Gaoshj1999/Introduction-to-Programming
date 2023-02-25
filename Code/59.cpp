#include<iostream>
using namespace std;
void biggest(float a,float b,float c);
int main()
{
    float a,c,b;
    cout<<"请输入三个数字："<<endl;
    cin>>a>>b>>c;
    biggest(a,b,c);
    return 0;
}
void biggest(float a,float b,float c)
{
    float t;
    t=a>b?a:b;
    t=t>c?t:c;
    cout<<"你输入的三个数字中最大的那个是："<<t<<endl;
}