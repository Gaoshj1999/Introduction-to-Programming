//顺序查找
#include<iostream>
using namespace std;
template<class T>
int seqsearch(const T list[],int n,const T &key)
{
    for(int i=0;i<n;i++)
    {
        if(list[i]==key)
        {
            return i;
        }
    }
    return -1;
}