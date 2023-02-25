//练习三:交换排序(冒泡排序)
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a = b;
    b = temp;
}
void bubblesort(int a[], int n)
{
    int temp=n;
    for (int i = 0; i < n - 1; n--)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for(int i=0;i<temp;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    int a[] = {1, 5, 4, 3, 2, 6, 9, 7, 8};
    int n = 9;
    bubblesort(a, n);
    return 0;
}