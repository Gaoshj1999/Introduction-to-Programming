#include <iostream>
using namespace std;
enum classroom
{
    cl1 = 1,
    cl2,
    cl3,
    cl4,
    cl5,
    cl6,
    cl7,
    cl8
};
enum place
{
    pl1 = 1,
    pl2,
    pl3,
    pl4,
    pl5,
    pl6,
    pl7,
    pl8
};
class people
{
private:
    int stnumber;
    int thnumber;
    place clplace;

public:
    people(int s, int t, place c)
    {
        stnumber = s;
        thnumber = t;
        clplace = c;
        cout<<"构建了一个班级"<<endl;
    }
    ~people()
    {
        cout<<"摧毁了一个班级"<<endl;
    }
    void setstnumber(int s)
    {
        stnumber = s;
    }
    void setthnumber(int t)
    {
        thnumber = t;
    }
    void setclplace(place c)
    {
        clplace = c;
    }
    int getstnumber() const
    {
        return stnumber;
    }
    int getthnumber() const
    {
        return thnumber;
    }
    place getclplace() const
    {
        return clplace;
    }
    void run()
    {
        cout << "班级数据开始运转" << endl;
    }
    void stop()
    {
        cout << "班级数据停止运转" << endl;
    }
};
class school
{
    private:
    classroom cl;
    people pl;
    public:
    school(classroom c,people p);
    ~school()
    {
        cout<<"摧毁了一所学校"<<endl;
    }
};
school::school(classroom c,people p):cl(c),pl(p)
{
    cout<<"构建了一所学校"<<endl;
}
int main()
{
    return 0;
}