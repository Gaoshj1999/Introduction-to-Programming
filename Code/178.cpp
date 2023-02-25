//从字符串输入
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;
template <class T>
inline T fromstring(const string &str)
{
    istringstream is(str); //创建字符串输入流
    T v;
    is >> v; //从字符串输入流中读取变量v
    return v;
}
int main()
{
    int v1 = fromstring<int>("5");
    cout << v1 << endl;
    double v2 = fromstring<double>("1.2");
    cout << v2 << endl;
    return 0;
}