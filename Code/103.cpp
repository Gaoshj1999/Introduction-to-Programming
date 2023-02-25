//vector,vector是标准库里的一个类模板
#include <iostream>
#include <vector>
double average(const vector<double> &arr)//引用向量
{
    double sum = 0;
    for (unsigned i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum / arr.size();
}
using namespace std;
int main()
{
    unsigned n;
    cout << "n=";
    cin >> n;
    vector<double> a(n);
    cout << "please input" << n << "real numbers:" << endl;
    for (unsigned i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "average=" << average(a) << endl;
    return 0;
}