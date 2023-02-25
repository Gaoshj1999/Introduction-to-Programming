//顺序容器
#include <iostream>
#include <list>
#include <deque>
#include <iterator>
using namespace std;
template <class T>
void printcontainer(const char *msg, const T &s)
{
    cout << msg << ":";
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}
int main()
{
    deque<int> s;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        s.push_front(x); //将最新读入的数据放在最开头位置
    }
    printcontainer("deque at first", s); //用s容器的内容的逆序构造列表容器
    list<int> l(s.rbegin(), s.rend());
    printcontainer("list ad first", l);
    //将列表容器l的每相邻两个元素顺序颠倒
    list<int>::iterator iter = l.begin();
    while (iter != l.end())
    {
        int v = *iter;//这里说明开始的时候迭代器指向的是头
        cout<<endl;
        cout<<*iter;
        iter = l.erase(iter);//当这个节点被删除后，迭代器会自动指向下一个节点
        cout<<endl;
        cout<<*iter;
        l.insert(++iter, v);
        cout<<endl;
        cout<<*iter;
    }
    printcontainer("list at last", l);
    s.assign(l.begin(), l.end());
    printcontainer("deque at last", s);
    return 0;
}
