//类模板
#include <iostream>
using namespace std;
struct student
{
    int id;
    float gpa;
};
template <class T>
class store //类模板：实现对任意类型数据进行存取
{
private:
    T item;         //item用于存放任意类型的数据
    bool havevalue; //havevalue标记item是否已被存入内容
public:
    store();
    T &getelem();             //提取数据函数
    void putelem(const T &x); //存入数据函数
};
template <class T>
store<T>::store() : havevalue(false) {}
template <class T>
T &store<T>::getelem()
{
    if (!havevalue)
    {
        cout << "no item present!" << endl;
        exit(1); //使程序完全退出，返回到操作系统
    }
    return item;
}
template <class T>
void store<T>::putelem(const T &x)
{
    havevalue = true;
    item = x;
}
int main()
{
    store<int> s1, s2;
    s1.putelem(3);
    s2.putelem(-7);
    cout << s1.getelem() << "　" << s2.getelem() << endl;
    student g = {1000, 23};
    store<student> s3;
    s3.putelem(g);
    cout << "the student id is" << s3.getelem().id << endl;
    store<double> d;
    cout << "retrieving object d...";
    cout << d.getelem() << endl;//d未初始化，看一下错误处理功能
    return 0;
}