#include <iostream>
using namespace std;
const int N = 6;
void print(const int *p, int n) //这是不希望调用的变量中的数据被改变
{
    cout << "{" << *p;
    for (int i = 1; i < n; i++)
    {
        cout << "," << *(p + i);
    }
    cout << "}" << endl;
}
int main()
{
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    print(array, N); //理清概念，函数传递的有两种，一个是规定类型的数据，另一个是规定类型的实参，因为此时的实参就等于那个数据，传递说到底就是把实参的数据复制给形参，可以参考复制构造函数的时候当时是要调用复制构造函数的
    return 0;
}