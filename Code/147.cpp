#include<iostream>
using namespace std;
template<class T>
int binsearch(const T list[],int n,const T &key)
{
    int low=0;
    ubt high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==list[mid])
        {
            return mid;
        }
        else if (key<list[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}