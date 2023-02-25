//输入流
#include <iostream>
using namespace std;
int main()
{
    char ch;
    while ((ch = cin.get()) != EOF)//EOF是文件结束符的意思，这里就用ctrl+z
        {
            cout.put(ch);
        }
    return 0;
}