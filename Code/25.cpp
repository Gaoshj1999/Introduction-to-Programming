#include <iostream>
#include<cmath>
using namespace std;
double series(int x);
double factorial(int n);
double pow(double a, int n);
int main()
{
    double r ,s,k;
    cout<<"请输入r,s"<<endl;
    cin>>r>>s;
    if(r*r<=s*s)
    {
        k=sqrt(series(r)*series(r)+series(s)*series(s));
    }
    else
    {
        k=0.5*series(r*s);
    }
    cout<<"k的值为："<<k<<endl;
    return 0;
    
}
double factorial(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= (n - i);
    }
    return result;
}
double pow(double a, int n)
{
    double result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result *= a;
    }
    return result;
}
double series(int x)
{
    double result = 0, n = 10;
    for (int i = 1; i <= n; i = i + 2)
    {
        result = (i + 1) % 4 == 0 ? result - (pow(x, i) / factorial(i)) : result + (pow(x, i) / factorial(i));
        if(pow(x, i) / factorial(i)<1/10000000000)
        break;
    }
    return result;
}