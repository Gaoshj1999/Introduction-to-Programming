//前向引用声明
//前向引用声明只能解决前类调用未定义的后类时先给出后类的名字，但是如果调用后类中的细节的话则不行，比如定义后类的一个类变量
/* #include<iostream>
using namespace std;
class b;
class a
{
    public:
    void f(b,c);
};
class b{
    public:
    void g(a,d);
};
 */
//这个问题前向引用声明就是可以解决的
/*
class fred;
class barney
{
    fred x;
};
class fred
{
    bareney y;
};
*/
//这个问题前向引用声明就不能解决，因为牵扯到了具体的细节，比如fred类型的x，但是fred还未定义，连长度都不知道