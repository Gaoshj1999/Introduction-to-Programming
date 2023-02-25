#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
#include <list>
using namespace std;
int main()
{
    int a[8] = {3, 2, 5, 6, 4, 1, 9, 8};
    cout << "元素9的索引是" << find(a, a + 8, 9) - a << endl;
    cout << "升序排列" << endl;
    sort(a, a + 8);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "降序排列" << endl;
    sort(a, a + 8, greater<int>());
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}