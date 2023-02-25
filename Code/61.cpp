#include<iostream>
using namespace std;
enum subject{math=1,english,chinese,sports,music,physic,chemical};
class grade
{
    private:
    subject mysubject;
    float myscore;
    char mygrade;
    public:
    grade(subject mys,float mysc,char myg)
    {
        mysubject=mys;
        myscore=mysc;
        mygrade=myg;
    }
    ~grade(){}
    void setmysubject(subject mys)
    {
       mysubject=mys; 
    }
    void setmyscore(float mysc)
    {
        myscore=mysc;
    }
    void setmygrade(float myg)
    {
        mygrade=myg;
    }
    subject getmysubject() const
    {
        return mysubject;
    }
    float getmyscore() const
    {
        return myscore;
    }
    char getmygrade() const
    {
        return mygrade;
    }
    void run()
    {
        cout<<"输出这门课的成绩"<<endl;
    } 
    void stop()
    {
        cout<<"停止这个程序"<<endl;
    }

};
int main()
{

}