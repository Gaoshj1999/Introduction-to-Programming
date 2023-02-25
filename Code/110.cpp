//cin函数是自动以空格分隔符的，但是如果输入一整行输入包括空格，这时候就可以用getline函数,要包括string头文件
#include <iostream>
#include <string>
using namespace std;
int main()
{
    for (int i = 0; i < 2; i++)
    {
        string city, state;
        getline(cin, city, ',');
        getline(cin, state);
        cout << "City:" << city << " State:" << state << endl;
    }
    return 0;
}
