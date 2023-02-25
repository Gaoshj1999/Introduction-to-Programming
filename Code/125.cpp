#include <iostream>
using namespace std;
class animal
{
    //如果紧跟在类名称后面声明私有成员，关键字private可以省略
    public:
    int age;
};
class dog : public animal
{
public:
    void setage(int n)
    {
        age = n;
    }
};
int main() 
{
    dog d;
    d.setage(2);
    return 0;
}
