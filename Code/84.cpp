//指针变量赋值不能直接赋地址，必须是程序中合法获得的地址才行
#include <iostream>
using namespace std;
int main()
{
    int i;
    int *ptr = &i;
    i = 10;
    cout << "i=" << i << endl;
    cout << "*ptr=" << *ptr << endl;
    //void voidobject(!错误，不能声明void类型的变量，如果可以计算器也不知道为其分配多少存储空间)
    void *pv; //可以声明void类型的指针,为什么可以定义呢，因为pv它的类型是确定，它就是一个指针，只是它指向的对象的类型没有确定，这样的指针可以容纳地址，但是不可以去访问它所存储的地址
    int j = 5;
    pv = &j;
    int *pint = static_cast<int *>(pv); //void指针转换为int指针//static_cast < type-id > ( expression )强制转换类型,把表达式中变来那个的类型转为<>中的类型
    cout << "*pint=" << *pint << endl;
    int a;
    const int*p1=&a;
    int b;
    p1=&b;//正确，p1本身的值是可以改变的
    //*p1=1;错误，不能通过p1改变所指的对象
    int c;
    int *const p2=&c;
    //p2=&b;错误，p2是指针常量，值不能改变
}