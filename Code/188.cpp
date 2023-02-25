#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void myswap(int a[])
{
    swap(a[0],a[1]);
}
int main()
{
    int a[2]={1,2};
    myswap(a);
    cout << a[0] << a[1] << endl;
    return 0;

}