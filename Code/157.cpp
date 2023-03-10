//映射
#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
    map<string, int> courses;
    courses.insert(make_pair("CSAPP", 3));
    courses.insert(make_pair("C++", 2));
    courses.insert(make_pair("CSARCH", 4));
    courses.insert(make_pair("COMPILER", 4));
    courses.insert(make_pair("OS", 5));
    int n = 3;   //剩下的可选次数
    int sum = 0; //学分总和
    while (n != 0)
    {
        string name;
        cin >> name;
        map<string, int>::iterator iter = courses.find(name); //查找课程
        if (iter == courses.end())
        {
            cout << name << "is not available" << endl;
        }
        else
        {
            sum += iter->second; //累加学分
            courses.erase(iter);
            n--;
        }
    }
    cout << "total credif:" << sum << endl; //输出总学分
    return 0;
}