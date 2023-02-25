#include<iostream>
using namespace std;
class fred;//前向引用声明
class barney
{
    fred *x;//原本是fred x，这是错误的因为当你还没有见到一个类的时候，你是不能使用它的细节的，你定义该类的一个对象，编译器不知道该给它分配多少内存空间
};
class fred
{
    barney y;
};//这就解决了前后声明的问题
