//传指针其实也是引用传递的一种
//浮点数在计算机中存储的时候的数据是近似的，所以可能会不一样，所以不要比较两个浮点数是否相等，即便事实上相等，计算机判断的时候也可能不一样
//因此如果真的要判断，可以令他们相减然后判断值是否足够小来确定是否相等
#include <iostream>
using namespace std;
void showintandfrac(float a, int *intpart, float *fracpart)
{
    *intpart = static_cast<int>(a);
    *fracpart = a - *intpart;
}
int main()
{
    float x, frac;
    int intp;
    cin >> x;
    showintandfrac(x, &intp, &frac);//这里可以对比下引用，引用的时候是定义形参时前加&表示引用，而以指针变量作为函数参数的时候是在传递实参的时候加上&取的变量的地址作为数据传给形参的指针变量
    cout << "int is:" << intp << endl;
    cout << "float is" << frac << endl;
    return 0;
}