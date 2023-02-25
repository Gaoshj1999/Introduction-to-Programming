#include<iostream>
using namespace std;
int *newintvar();
int main()
{
    int *intptr=newintvar();
    *intptr=5;//这里有效是因为定义的new p不会被释放，所以需要手动去delete
    delete intptr;
    return 0;
}
int *newintvar()
{
    int *p=new int();
    return p;
}