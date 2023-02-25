//单链表节点类模板
#include <iostream>
using namespace std;
template <class T>
class node
{
private:
    node<T> *next;

public:
    T data;
    node(const T &item, node<T> *next = 0);
    void insertafter(node<T> *p);
    node<T> *deleteafter();
    const node<T> *nextnode() const;
    node<T> *nextnode();
};
template <class T>
void node<T>::insertafter(node<T> *p)
{
    p->next = next;
    next = p;
}
template <class T>
node<T> *node<T>::deleteafter(void) //这只是换了指针方向，但是后面的那个元素本身并没被删除
{
    node<T> *tempptr = next;
    if (next == 0)
    {
        return 0;
    }
    next = tempptr->next;
    return tempptr;
}
template <class T>
node<T>::node(const T &data, node<T> *next = 0) : data(data), next(next) {}
template <class T>
node<T> *node<T>::nextnode()
{
    return next;
}
template <class T>
const node<T> *node<T>::nextnode() const
{
    return next;
}
//P52视频是完整的链表类模板，所有功能都有，但是太复杂了就没有写