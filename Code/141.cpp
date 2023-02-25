//队列
#include <iostream>
#include <cassert>
template <class T, int size = 50>
class queue
{
private:
    int front, rear, count; //队头指针，队尾指针，元素个数
    T list[size];           //队列元素数组
public:
    queue();
    void insert(const T &item); //新元素入队
    T remove();                 //元素出队
    void clear();               //情况队列
    const T &getfront() const;  //访问队首元素
    int getlength() const;      //求队列长度
    bool isempty() const;       //判断队列空否
    bool isfull() const;        //判断队列满否
};
template <class T, int size>
queue<T, size>::queue() : front(0), rear(0), count(0) {}
template <class T, int size>
void queue<T, size>::insert(const T &item) //向队尾插入元素
{
    assert(count != size);
    count++ ;                   //元素个数增1
    list[rear] = item; //向队尾插入元素
    rear = (rear + 1) % size;    //队尾指针增1，用取余运算实现队列循环
}
template<class T,int size>
T queue<T,size>::remove()
{
    assert(count!=0);
    int temp=front;//记录下原先的队首指针
    count--;//元素个数自减1
    front=(front+1)%size;//队首指针增1。取余以实现循环队列
    return list[temp];//返回首元素值
}
template<class T,int size>
const T &queue<T,size>::getfront() const
{
    return list[front];
}
template<class T,int size>
int queue<T,size>::getlength() const//返回队列元素个数
{
    return count;
}
template<class T,int size>
bool queue<T,size>::isempty() const
{
    return count==0;
}
template<class T,int size>
bool queue<T,size>::isfull() const
{
    return count==size;
}
template<class T,int size>
void queue<T,size>::clear()
{
    count=0;
    front=0;
    rear=0
}

