#include <iostream>
using namespace std;
int main()
{
    int line1[] = {1, 2, 3};
    int line2[] = {4, 5, 6};
    int line3[] = {7, 8, 9};
    int *line[] = {line1, line2, line3}; //指针前的int表示的是它指向的数据的类型。所以即便是自己定义的类型/类也可以比如point//指针数组
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << line[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
