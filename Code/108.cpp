//c风格的字符串，用字符数组存放字符串
#include <iostream>
using namespace std;
int main()
{
    const char *string1 = "program"; //字符串常量//这个表示方法表示""这样的返回的是字符串的首地址，可以赋值给常指针，因为地址不能变动，所以一定要常
    char str[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}; //一定要添加\0//c风格字符串
    char str1[8] = "program";
    char str2[] = "program";                      //三种等价表述
    cout << string1 << " " << string1[3] << endl; //返回的就是内容了
    return 0;
}
