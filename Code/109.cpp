#include <iostream>
#include <string>
using namespace std;
inline void test(const char *title, bool value)
{
    cout << title << "returns" << (value ? "true" : "false") << endl;//这里的title直接就是输出地址内的内容了，如果再加*就会输出首元素，可以按照数组来理解
}
int main()
{
    string s1 = "def";
    cout << "s1 is" << s1 << endl;
    string s2;
    cout << "please enter s2:";
    cin >> s2;
    cout << "length of s2:" << s2.length() << endl;
    test("s1<=\"ABC\"", s1 <= "ABC"); //比较运算符的测试
    test("\"DEF\"<=s1", "DEF" <= s1);
    s2 += s1;
    cout << "s2=s2+s1:" << s2 << endl; //连接运算符的测试
    cout << "length of s2:" << s2.length() << endl;
    return 0;
}
