#include <iostream>
#include <map>
#include <cctype>
using namespace std;
int main()
{
    map<char, int> s; //用来储存字母出现次数的映射
    char c;           //存储输入字符
    do
    {
        cin >> c;       //输入下一个字符
        if (isalpha(c)) //判断是否为字母
        {
            c = tolower(c); //将字母转化为小写
            s[c]++;         //将该字母的出现频率加1//这个操作的意思是如果没有则插入，如果有则返回引用然后次数加一
        }
    } while (c != '.'); //碰到.则结束输入
    //输出每个字母出现的次数
    for (map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++)
    {
        cout << iter->first << " " << iter->second << " ";
    }
    cout << endl;
    return 0;
}