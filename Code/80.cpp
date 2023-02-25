//数组元素作实参与单个变量一样，但是不能做形参，也没有必要
//而数组名是可以作为形参的
//这道例题说明了当数组名作为函数形参时，因为实参数组传递的是地址，所以相当于引用，是形实结合的，改变了形参的值同时也会改变实参的值
#include<iostream>
using namespace std;
void rowsum(int a[][4],int nrow)
{
    for(int i=0;i<nrow;i++)
    {
        for(int j=1;j<4;j++)
        {
            a[i][0]+=a[i][j];
        }
    }
}
int main()
{
    int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    rowsum(table,3);
    for(int i=0;i<3;i++)
    {
        cout<<"sum of row"<<i<<"is"<<table[i][0]<<endl;
    }
    return 0;
}