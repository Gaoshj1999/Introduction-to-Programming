//数组类模板
#include <iostream>
#include <cassert>
using namespace std;
template <class T> //数组模板定义
class array
{
private:
    T *list;  //用于存放动态分配的数组的首地址
    int size; //数组大小(元素个数)
public:
    array(int sz = 50);
    array(const array<T> &a);
    ~array();
    array<T> &operator=(const array<T> &rhs); //重载=
    T &operator[](int i);
    const T &operator[](int i) const; //重载"[]"常函数//用来处理常对象的
    operator T *();                   //重载到T*类型的转换
    operator const T *() const;
    int getsize() const; //取数组的大小
    void resize(int sz); //修改数组的大小
};
template <class T>
array<T>::array(int sz)
{
    assert(sz >= 0); //这是属于头文件cassert的，主要是测试程序中这个条件：正确则不作任何操作。错误则输出信息并停止程序。
    size = sz;
    list = new T[size];
}
template <class T>
array<T>::~array()
{
    delete[] list;
}
template <class T>
array<T>::array(const array<T> &a)
{
    size = a.size;
    list = new T[size];
    for (int i = 0; i < size; i++)
    {
        list[i] = a.list[i];
    }
}
template <class T>
array<T> &array<T>::operator=(const array<T> &rhs) //重载=运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值//这是经验因为复制构造函数是深层复制，这也有可能是
{
    if (&rhs != this) //如果是同一个对象就不需要进行无谓的赋值
    {
        if (size !=rhs.size) //如果本对象中数组大小与rhs不一样，则删除数组原有内存，然后重新分配
        {
            delete[] list;
            size = rhs.size;
            list = new T[size];
        }
    }
    for (int i = 0; i < size; i++)
    {
        list[i] = rhs.list[i];
    }
    return *this; //返回对当前对象的引用
}
template <class T> //重载下表运算符，实现与普通数组一样通过下标访问元素，具有越界检查功能
T &array<T>::operator[](int n)
{
    assert(n > 0 && n < size);
    return list[n];
}
template <class T>
const T &array<T>::operator[](int n) const
{
    assert(n > 0 && n < size);
    return list[n];
}
template <class T>       //重载指针转换运算符，将array类的对象名转换为T类型的指针
array<T>::operator T *() //***这个函数要求不要制定返回值类型，这是语法要求
{
    return list; //返回当前对象中私有数组,就是内部含有的真正的那个数组的首地址
}
template <class T>
int array<T>::getsize() const
{
    return size;
}
template <class T>
void array<T>::resize(int sz)
{
    assert(sz >= 0);
    if (sz == size)
    {
        return;
    }
    T *newlist = new T[sz];          //申请新的数组内存
    int n = (sz < size) ? sz : size; //将sz与size较小的一个赋值给n
    for (int i = 0; i < n; i++)      //将原有数组中前n个元素复制到新数组中
    {
        newlist[i] = list[i];
    }
    delete[] list;  //删除原数组
    list = newlist; //使list指向新数组
    size = sz;      //更新size
}
int main()
{
    array<int> a(10); //用来存放质数的数组，初始状态有10个元素
    int n, count = 0;
    cout << "enter a value >=2 as upper limit for prime numbers";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;
        for (int j = 0; j < count; j++)
        {
            if (i % a[j] == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            if (count == a.getsize())
            {
                a.resize(count * 2);
            }
            a[count++] = i;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout<< a[i];
    }
    cout << endl;
    return 0;
}
//有点小问题，但是不想找了