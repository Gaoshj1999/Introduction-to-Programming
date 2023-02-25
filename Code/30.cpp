#include <iostream>
using namespace std;
int cn(int n, int k);
int main()
{
    int n, k;
    cout << "请输入人数:" << endl;
    cin >> n;
    cout << "请输入要挑选的人数：" << endl;
    cin >> k;
    cout << "可能的组合数为：" << cn(n, k) << endl;
    return 0;
}
int cn(int n, int k)
{
    if (n < k)
        return 0;
    else if (n == k || k == 0)
        return 1;
    else
    {
        return cn(n - 1, k - 1) + cn(n - 1, k);
    }
}