//向字符串输出
//就是向程序中的某个字符串输出，可以把内存中的某个字符串当作目的地
//可以利用这种功能将其他类型的数据转化为字符串
//本例将数值转化为字符串
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
template <class T>
inline string tosring(const T &v)
{
    ostringstream os;//创建字符串输出流
    os << v;//将变量v的值写入字符串流//这里还需注意的是如果引用的时候传的是类的对象，就还需要在类内对<<进行重载
    return os.str();//返回输出流生成的字符串
}
int main()
{
    string str1 = to_string(5);//输出的时候实际上是将5转化为了字符串输出的
    cout << str1 << endl;
    string str2 = to_string(1.2);
    cout << str2 << endl;
    return 0;
}