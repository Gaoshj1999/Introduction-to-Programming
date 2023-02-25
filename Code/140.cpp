//栈及其应用
#include <iostream>
#include <cassert>
#include <sstream>
#include <cmath>

using namespace std;
template <class T, int size = 50> //模板中可以有常量作为参数，这个例子是先一个类型，后一个常数
class stack
{
private:
    T list[size];
    int top;

public:
    stack();
    void push(const T &item);
    T pop();
    void clear();
    const T &peek() const; //读取栈顶数据
    bool isempty() const;
    bool isfull() const;
};
template <class T, int size>
stack<T, size>::stack() : top(-1) {}
template <class T, int size>
void stack<T, size>::push(const T &item)
{
    assert(!isfull());
    list[++top] = item;
}
template <class T, int size>
T stack<T, size>::pop()
{
    assert(!isempty());
    return list[top--];
}
template <class T, int size>
const T &stack<T, size>::peek() const
{
    assert(!isempty());
    return list[top];
}
template <class T, int size>
bool stack<T, size>::isempty() const
{
    return top == -1;
}
template <class T, int size>
bool stack<T, size>::isfull() const
{
    return top == size - 1;
}
template <class T, int size>
void stack<T, size>::clear()
{
    top = -1;
}
class calculator
{
private:
    stack<double> s;                                   //操作数栈
    void enter(double num);                            //将操作数num压入栈
    bool gettwooperands(double &opnd1, double &opnd2); //连续将两个操作数弹出栈，放在opnd1和opnd2中
    void compute(char op);                             //执行由操作符op制定的运算
public:
    void run();
    void clear();
};
inline double stringtodouble(const string &str) //工具函数，用于将字符串转换为实数
{
    istringstream stream(str); //字符串输入流
    double result;
    stream >> result;
    return result;
}
void calculator::enter(double num) //将操作数num压入栈
{
    s.push(num);
}
bool calculator::gettwooperands(double &opnd1, double &opnd2)
{
    if (s.isempty()) //检查栈是否空
    {
        cerr << "missing operand!" << endl;
        return false;
    }
    opnd1 = s.pop(); //将右操作数弹出
    if (s.isempty()) //检查栈是否空
    {
        cerr << "missing operand!" << endl;
        return false;
    }
    opnd2 = s.pop(); //将左操作数弹出栈
    return true;
}
void calculator::compute(char op)
{
    double operand1, operand2;
    bool result = gettwooperands(operand1, operand2);
    if (result)
    {
        switch (op)
        {
        case '+':
            s.push(operand2 + operand1);
            break;
        case '-':
            s.push(operand2 - operand1);
            break;
        case '*':
            s.push(operand2 * operand1);
            break;
        case '/':
            if (operand1 == 0)
            {
                cerr << "divide by 0!" << endl;
                s.clear();
            }
            else
            {
                s.push(operand2 / operand1);
            }
            break;
        case '^':
            s.push(pow(operand2, operand1));
            break;
        default:
            cerr << "unrecongnized operator!" << endl;
            break;
        }
        cout << "= " << s.peek() << " "; //输出本次运算结果
    }
    else
    {
        s.clear(); //操作数不够，清空栈
    }
}

void calculator::run()
{
    string str;
    while (cin >> str, str != "q")
    {
        switch (str[0])
        {
        case 'c':
            s.clear();
            break;
        case '-': //判断是减号还是负号
            if (str.size() > 1)
            {
                enter(stringtodouble(str));
            }
            else
            {
                compute(str[0]);
            }
            break;
        case '+':
        case '*':
        case '/':
        case '^':
            compute(str[0]);
        default: //若读入的是操作数，转换为整型后压入栈
        {
            enter(stringtodouble(str));
            break;
        }
        }
    }
}
void calculator::clear() //清空操作数栈
{
    s.clear();
}
int main()
{
    calculator c;
    c.run();
    return 0;
}
