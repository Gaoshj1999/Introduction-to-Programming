//deque双端队列
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <deque>
using namespace std;
int main()
{
    istream_iterator<int> i1(cin), i2;//建立一对输入流迭代器
    vector<int> s1(i1, i2);//通过输入流迭代器从标准输入流中输入数据
    sort(s1.begin(), s1.end());//将输入的整数排序(从小到大)
    deque<int> s2;
    //以下循环遍历s1
    for (vector<int>::iterator iter = s1.begin(); iter != s1.end(); ++iter)
    {
        if (*iter % 2 == 0)
        {
            s2.push_back(*iter);//偶数放到s2的尾部
        }
        else
        {
            s2.push_front(*iter);//奇数放到s1的头部
        }
    }
    copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));//将s2的结果输出
    cout << endl;
    return 0;
}