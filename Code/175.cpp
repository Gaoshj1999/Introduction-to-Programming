#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    cout << "type a line terminated by 't'" << endl; //cin读入的时候默认空格为分隔符，是不会读入的，如果想读入的化
    getline(cin, line, 't');                         //getline可以读入空格，最后一个参数可以自行规定分隔符，默认情况是换行为分隔符
    cout << line << endl;
    return 0;
}