#include <iostream>
using namespace std;
class client
{
private:
    static char servername;
    static int clientnum;

public:
    client(){}
    //复习一下，client()写成这样是函数的声明，之后具体函数体还是需要定义的，就跟普通的函数是一样的，即使函数体内没有内容
    static void changeservername(char name);
    static int getclientnum();
};
int client::clientnum = 0;
char client::servername = 'a';
void client::changeservername(char name)
{
    client::servername = name;
    client::clientnum++;
}
int client::getclientnum()
{
    return client::clientnum;
}
int main()
{
    client c1;
    c1.changeservername('a');
    cout << c1.getclientnum() << endl;
    client c2;
    c2.changeservername('b');
    cout << c2.getclientnum() << endl;
    cout << c1.getclientnum() << endl;
    c2.changeservername('c');
    cout << c1.getclientnum() << endl;
    return 0;
}
//1,2,2,3