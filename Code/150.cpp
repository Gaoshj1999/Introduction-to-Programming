//迭代器综合
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
template <class T, class inputiterator, class outputiterator> //将来自输入将来自输入迭代器的n个T类型的数值排序，将结果通过输出迭代器result输出
void mysort(inputiterator first, inputiterator last, outputiterator result)
{
    vector<T> s;
    for (; first != last; ++first) //通过输入迭代器将输入数据存入向量容器s中
    {
        s.push_back(*first);
    } //对s进行排序，sort函数的参数必须是随机访问迭代器
    sort(s.begin(), s.end());
    copy(s.begin(), s.end(), result); //将s序列通过输出迭代器输出
}
int main()
{
    double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
    mysort<double>(a, a + 5, ostream_iterator<double>(cout, "　"));//左闭右开，所以到a+5
    cout << endl;
    mysort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, "　"));
    cout << endl;
    return 0;
}