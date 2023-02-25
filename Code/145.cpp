//交换排序
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubblesort(int a[], int n)
{
    int i = n - 1;
    while (i > 0)
    {
        int lastexchangeindex = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j], a[j + 1]);
                lastexchangeindex = j;
            }
        }
        i = lastexchangeindex;
    }
}
int main()
{
    int a[] = {0, 1, 2};
    bubblesort(a, 3);
    return 0;
}