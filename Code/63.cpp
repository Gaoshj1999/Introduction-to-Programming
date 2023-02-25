#include<iostream>
using namespace std;
class human
{
    private:
    char sex;
    float weight;
    float height;
    public:
    human(char s,float w,float h):sex(s),weight(w),height(h){}
    ~human(){}
    void setsex(char s)
    {
        sex=s;
    }
    void setweight(float w)
    {
        weight=w;
    }
    void setheight(float h)
    {
        height=h;
    }
    char getsex() const
    {
        return sex;
    }
    float getweight() const
    {
        return weight;
    }
    float getheight() const
    {
        return height;
    }
};
int main()
{
    char mysex;
    float myheight;
    float myweight;
    cout<<"please enter your sex"<<endl;
    cin>>mysex;
    cout<<"please enter your weight"<<endl;
    cin>>myweight;
    cout<<"please enter your height"<<endl;
    cin>>myheight;
    human me(mysex,myweight,myheight);
    cout<<me.getsex()<<me.getweight()<<me.getheight();
    return 0;
}

