//联合体
//联合体是特殊的类，但是也可以作为无名联合体使用
//联合体的特点是数据成员共用一个存储空间，这些成员必须不同时存在，因为他们公用相同的存储单元，所以他们必须不同是有效
//他们共用的存储空间是最大的那一个
#include <iostream>
using namespace std;
class examinfo
{
public:
    examinfo(string name, char grade) : name(name), mode(GRADE), grade(grade) {}
    examinfo(string name, bool pass) : name(name), mode(PASS), pass(pass) {}
    examinfo(string name, int percent) : name(name), mode(PERCENTAGE), percent(percent) {}
    void show();

private:
    string name;
    enum
    {
        GRADE,
        PASS,
        PERCENTAGE
    } mode; //mode是联合体变量
    union { //无名联合体，只是表示他们要共用存储空间
        char grade;
        bool pass;
        int percent;
    };
};
void examinfo::show()
{
    cout << name << ':' << endl;
    switch (mode)
    {
    case GRADE:
        cout << grade;
        break;
    case PASS:
        cout << (pass ? "PASS" : "FAIL");
        break;
    case PERCENTAGE:
        cout << percent;
        break;
    }
    cout << endl;
}
int main()
{
    examinfo course1("English", 'B');
    examinfo course2("Calculate", true);
    examinfo course3("C++ Praogramming", 85);
    course1.show();
    course2.show();
    course3.show();
    return 0;
}
