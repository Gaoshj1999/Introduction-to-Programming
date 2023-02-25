#include<iostream>
using namespace std;
class employee
{
    private:
    char *name;
    char *address;
    char *city;
    char* code;
    public:
    employee(char* n="",char* add="",char *ct="",char *cd=""):name(n),address(add),city(ct),code(cd){}//这是带有默认形参值的构造函数，也可以通过初始化列表改变形参的值从而改变参数的值
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"address"<<address<<endl;
        cout<<"city:"<<city<<endl;
        cout<<"code:"<<code<<endl;
    }
    void changename(char* nm)
    {
        name=nm;
    }
};
//其他部分不是重点就不写了