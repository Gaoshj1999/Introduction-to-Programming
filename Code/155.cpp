//使用优先队列模拟细胞分裂
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <functional>
#include <stack>
#include <queue>
#include <time.h>
using namespace std;
const int split_time_min = 500;  //细胞分裂的最短时间
const int split_time_max = 2000; //细胞分裂的最长时间
class cell;
priority_queue<cell> cellqueue; //定义了一个优先队列的对象
class cell
{
private:
    static int count; //细胞总数
    int id;           //当前细胞编号
    int time;         //细胞分裂时间
public:
    cell(int birth) : id(count++) //bitrh为细胞诞生时间//初始化，确定细胞分裂的时间
    {
        time = birth + (rand() % (split_time_max - split_time_min)) + split_time_min;
    }
    int getid() const
    {
        return id;
    }
    int getsplittime() const
    {
        return time;
    }
    bool operator<(const cell &s) const //定义"<"
    {
        return time > s.time; //细胞分裂比较早的定义为比较大的
    }
    void split() const //细胞分裂
    {
        cell child1(time), child2(time);
        cout << time << "s: cell #" << id << "splits to #" << child1.getid() << "and #" << child2.getid() << endl;
        cellqueue.push(child1); //将第一个子细胞压入优先级队列
        cellqueue.push(child2);
    }
};
int cell::count = 0;
int main()
{
    srand(static_cast<unsigned>(time(0)));
    int t; //模拟时间长度
    cout << "simulation time:";
    cin >> t;
    cellqueue.push(cell(0));//将第一个细胞压入优先级队列
    while (cellqueue.top().getsplittime() <= t)
    {
        cellqueue.top().split();//模拟下一个细胞的分裂
        cellqueue.pop();//将刚刚分裂的细胞弹出
    }
    return 0;
}