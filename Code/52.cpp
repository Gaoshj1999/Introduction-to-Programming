//结构体
//结构体是特殊的类，如果没有声明成员变量类型，则认为是公有的
//一般来说结构体是用类定义只有数据成员的类，但是在c++中也可以定义函数成员，这是与c不同的
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student
{
    int num;
    string name;
    char sex;
    int age;
};//这里没有标明成员类型，则默认是公有的
int main()
{
    student stu={97001,"Zhang wei",'F',25};//因为全是数据，所以可以直接赋值
    stu.num=1;//这表示可以访问
    cout<<stu.num<<endl;//这也表示可以访问
    return 0;
    
}


