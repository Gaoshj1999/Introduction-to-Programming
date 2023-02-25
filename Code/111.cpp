#include <cmath>
#include <iostream>
using namespace std;
class savingsaccount
{
private:
    int id;
    double balance; //余额
    double rate;
    int lastdate;
    double accumulation;
    static double total;//所有帐户的总金额
    void record(int date, double amount); //记录一笔账，date为日期，amount为金额，desc为说明
    double accumulate(int date) const
    {
        return accumulation + balance * (date - lastdate);
    }

public:
    savingsaccount(int date, int id, double rate);
    ~savingsaccount() {}

    int getid()
    {
        return id;
    }
    double getbalance()
    {
        return balance;
    }
    double getrate()
    {
        return rate;
    }
    static double gettotal()
    {
        return total;
    }
    void deposit(int date, double amount);  //存入现金
    void withdraw(int date, double amount); //取出现金
    void settle(int date);                  //结算利息，每年1月1日调用一次该函数
    void show();
};
savingsaccount::savingsaccount(int date, int id, double rate) : id(id), balance(0), rate(rate), lastdate(date), accumulation(0)
{
    cout << date << "\t#" << id << "is created" << endl;
}
void savingsaccount::record(int date, double amount)
{
    accumulation = accumulate(date);
    lastdate = date;
    amount = floor(amount * 100 + 0.5) / 100; //向下取整函数，ceil是向上取整函数
    balance += amount;
    total += amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}
void savingsaccount::deposit(int date, double amount)
{
    record(date, amount);
}
void savingsaccount::withdraw(int date, double amount)
{
    if (amount > getbalance())
    {
        cout << "error:not enough money" << endl;
    }
    else
    {
        record(date, -amount);
    }
}
void savingsaccount::settle(int date)
{
    double interest = accumulate(date) * rate / 365;
    if (interest != 0)
    {
        record(date, interest);
    }
    accumulation = 0;
}
void savingsaccount::show()
{
    cout << "#" << id << "\tbalance:" << balance;
}
double savingsaccount::total = 0;
int main()
{
    //建立账户
    savingsaccount sa0(1, 21325302, 0.015);
    savingsaccount sa1(1, 58320212, 0.015);
    //几笔帐目
    sa0.deposit(5, 5000);
    sa1.deposit(23, 10000);
    sa0.deposit(45, 5500);
    sa1.withdraw(60, 4000);
    //开户后第90天到了银行的计息日，结算所有帐户的年息
    sa0.show();
    cout << endl;
    sa1.show();
    cout << endl;
    //输出各个帐户信息
    sa0.show();
    cout << endl;
    sa1.show();
    cout << endl;
    cout<<"total:"<<savingsaccount::gettotal()<<endl;
}
//前部完整但是没有优化的代码
