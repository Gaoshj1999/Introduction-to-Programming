#include<iostream>
using namespace std;
enum weekdays{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main()
{
    weekdays day;
    int leitime;
    cout<<"please input how long you can play:"<<endl;
    cin>>leitime;
    if(leitime>=4)
    {
        if(leitime<=7)
        {
            day=weekdays(leitime);
        }
        else
        {
            day=weekdays(7);
        }
        cout<<"today is "<<day<<endl;
    }
    else
    {
        cout<<"poor kids ,you have no time to play"<<endl;
    }
    return 0;


}
