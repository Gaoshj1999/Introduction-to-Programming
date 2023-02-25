//多重集合及多重映射
#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
    multimap<string, string> courses;
    typedef multimap<string, string>::iterator courselter;
    //将课程上课时间插入courses映射中
    courses.insert(make_pair("C++", "2-6"));
    courses.insert(make_pair("COMPILER", "3-1"));
    courses.insert(make_pair("COMPILER", "5-2"));
    courses.insert(make_pair("OS", "1-2"));
    courses.insert(make_pair("OS", "4-1"));
    courses.insert(make_pair("OS", "5-5"));
    //输入一个课程名，直到找到该课程为止，记下每周上课次数
    string name;
    int count;
    do
    {
        cin >> name;
        count = courses.count(name);
        if (count == 0)
        {
            cout << "cannot find this course" << endl;
        }
    } while (count == 0);
    //输出每周上课次数和上课时间
    cout << count << "lesson(s)per week:";
    pair<courselter, courselter> range = courses.equal_range(name);//一门课可能有好几个上课时间，我们把这个范围找到然后遍历输出
    for (courselter iter = range.first; iter != range.second; ++iter)
    {
        cout << iter->second << " ";
    }
    cout << endl;
    return 0;

}
