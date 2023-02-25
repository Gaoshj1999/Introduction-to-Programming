#include<iostream>
using namespace std;
int main()
{
    char a;
    int b;
    cout<<"please enter a letter"<<endl;
    cin>>a;
    b=a;
    cout<<a<<' '<<b<<endl;
    return 0;
}//这个程序说明char和int是可以互相转化的,其转化方式就是通过ascll码来转换的,且char输入数字也是可以的,因为它是把数字看成了数字字符,但是由于是char所以只能读入一个字符