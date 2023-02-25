#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    deque<int> ideque;
    ideque.push_back(3);
    ideque.push_back(1);
    ideque.push_back(4);
    ideque.push_back(8);
    ideque.push_back(6);
    while(!ideque.empty())
    {
        cout<<"取出元素"<<ideque.front()<<endl;
        ideque.pop_front();
    }
    return 0;
}