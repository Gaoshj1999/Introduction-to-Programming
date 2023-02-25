//集合
#include <iostream>
#include <set>
#include <iterator>
#include <utility>
using namespace std;
int main()
{
    set<double> s;
    while (true)
    {
        double v;
        cin >> v;
        if (v == 0) //输入0表示结束
        {
            break;
        }
        pair<set<double>::iterator, bool> r = s.insert(v);
        if (!r.second) //如果v已经存在，输出提示信息
        {
            cout << v << "is dupilcated" << endl;
        }
    }
    set<double>::iterator iter1 = s.begin();
    set<double>::iterator iter2 = s.end();
    double medium = (*iter1 + *(--iter2)) / 2;
    cout << "<=medium:";
    copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
    cout << endl;
    cout << ">=medium:";
    copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
    cout << endl;
    return 0;
}