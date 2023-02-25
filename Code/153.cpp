//list
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;
int main()
{
    string names1[] = {"Alice", "Helen", "Lucy", "Susan"};
    string names2[] = {"Bob", "David", "Levin", "Mike"};
    list<string> s1(names1, names1 + 4);
    list<string> s2(names2, names2 + 4);
    //调用拼接函数
    s2.splice(s2.end(), s1, s1.begin());       //将s1的第一个元素放到s2的最后
    list<string>::iterator iter1 = s1.begin(); //iter1指向s1首
    advance(iter1, 2);                         //iter1前进2个元素，它将指向s1的第3个元素
    list<string>::iterator iter2 = s2.begin(); //iter2指向s2首
    ++iter2;                                   //iter1前进2个元素，它将指向s2的第2个元素
    list<string>::iterator iter3 = iter2;      //用iter2初始化iter3
    advance(iter3, 2);                         //iter3前进2个元素，它将指向s2第4个元素
    s1.splice(iter1, s2, iter2, iter3);        //将[iter2,iter3)范围内的结点接到s1中iter1指向的结点前
    copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, "　"));
    cout << endl;
    copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, "　"));
    cout << endl;
}