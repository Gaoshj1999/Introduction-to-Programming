#include<iostream>
using namespace std;
float convert(float tempfer);
int main()
{
    float temperatuer;
    cout<<"what's the temperature"<<endl;
    cin>>temperatuer;
    cout<<convert(temperatuer);
    return 0;
}
float convert(float tempfer)
{
    return (tempfer-32)*5/9;
}