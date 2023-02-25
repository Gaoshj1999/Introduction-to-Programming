//成员函数适配器
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
struct car
{
    int id;
    car(int id)
    {
        this->id = id;
    }
    void display() const
    {
        cout << "car" << id << endl;
    }
};
int main()
{
    vector<car *> pcars;
    vector<car> cars;
    for (int i = 0; i < 5; i++)
    {
        pcars.push_back(new car(i));
    }
    for (int i = 5; i < 10; i++)
    {
        cars.push_back(car(i));
    }
    cout << "elements in pcars:" << endl;
    for_each(pcars.begin(), pcars.end(), std::mem_fun(&car::display));
    cout << endl;
    cout << "elements in cars:" << endl;
    for_each(cars.begin(), cars.end(), std::mem_fun_ref(&car::display));
    cout << endl;
    for (size_t i = 0; i < pcars.size(); ++i)
    {
        delete pcars[i];
    }
    return 0;
}