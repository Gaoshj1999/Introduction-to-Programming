#include <iostream>
#include <string>
//方式1用c语言字符串数组的方式实现字符串的连接
//方式2用string类函数实现
using namespace std;
char *link(char *a, char *b)
{
    int m = 0, n = 0;
    while (a[m] != '\0')
    {
        m++;
    }
    while (b[n] != '\0')
    {
        n++;
    }
    char *c = new char[m + n + 1];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = m; i < m + n; i++)
    {
        c[i] = b[i - m];
    }
    c[m + n] = '\0';
    return c;
}
int main()
{
    char a[] = "abc";
    char b[] = "def";
    cout << link(a, b) << endl;
    string s1 = "abc", s2 = "def";
    cout << s1 + s2 << endl;
    return 0;
}