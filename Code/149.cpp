//迭代器
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
double square(double x)
{
    return x * x;
}
int main()
{
    //从标准输入读入若干个实数，分别将他们的平方输出
    transform(istream_iterator<double>(cin), istream_iterator<double>(),ostream_iterator<double>(cout , "\t"), square);
    //输入流迭代器，类型是double，第二个是结束位置的迭代器，用函数计算结果，然后结果依次送到输出流的迭代器指示的输出流中"\t"表示分隔符
    cout << endl;
    return 0;
}