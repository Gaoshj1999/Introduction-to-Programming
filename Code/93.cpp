#include <iostream>
using namespace std;
int *search(int n, int *d)
{
    int c;
    for (int i = 0; i < 10; i++)
    {
        if (*(d + i) == 0)
        {
            c=i;
        }
    }
    return d+c;//&d[c]也可以
}
int main()
{
    int n;
    cout << "请输入数组的长度" << endl;
    cin >> n;
    int a[n];
    cout << "请输入数组元素" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *find = search(n, a);
    cout << *find <<endl;
}