#include <iostream>
using namespace std;
int main()
{
    struct time
    {
        unsigned int year;
        unsigned int month;
        unsigned int day;
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
    } timenow = {};
    cout << "please input year" << endl;
    cin >> timenow.year;
    cout << "please input month" << endl;
    cin >> timenow.month;
    cout << "please input day" << endl;
    cin >> timenow.day;
    cout << "please input hour" << endl;
    cin >> timenow.hour;
    cout << "please input minute" << endl;
    cin >> timenow.minute;
    cout << "please input second" << endl;
    cin >> timenow.second;
    if (timenow.month > 12 | timenow.day > 31 | timenow.hour > 23 | timenow.minute > 59 | timenow.second > 59)
        cout << "you are alien";
    else
        cout << timenow.year << '/' << timenow.month << '/' << timenow.day << ' ' << timenow.hour << ':' << timenow.minute << ':' << timenow.second << endl;
    return 0;
}