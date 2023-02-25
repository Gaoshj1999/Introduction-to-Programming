//基于范围的for循环配合auto举例
#include<iostream>
#include<vector>
int main()
{
    std::vector<int>v={1,2,3};
    for(auto i=v.begin();i!=v.end();i++)//v.begin得到的是v起始元素的指针，也就是首元素地址//这是自动类型的指针
    {
        std::cout<<*i<<std::endl;
    }
    for(auto e:v)//这里是遍历整个vector，且不用管v中的数据是什么类型，每遍历一个数据，是什么类型，e就自动变为什么类型
    {
        std::cout<<e<<std::endl;
    }
    return 0;
}