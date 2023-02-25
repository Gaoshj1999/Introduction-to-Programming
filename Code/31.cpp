#include<iostream>
using namespace std;
void move(char a,char b);
void ham(int n,char a,char b, char c);
int main()
{
    int n;
    char a='A',b='B',c='C';
    cout<<"请输入盘子个数："<<endl;
    cin>>n;
    ham(n,a,b,c);
    return 0;
}
void move(char a,char b)
{
    cout<<a<<"--->"<<b<<endl;
}
void ham(int n,char a,char b,char c)
{
    if(n==1)
    move(a,c);
    else
    {
        ham(n-1,a,c,b);
        move(a,c);
        ham(n-1,b,a,c);
    }
    
}