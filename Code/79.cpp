#include <iostream>
using namespace std;
int main()
{
    const char key[] = {'a', 'c', 'b', 'a', 'd'};
    const int num_ques = 5;
    char c;
    int ques = 0, numcorrect = 0;
    cout << "enter the" << num_ques << "question tests:" << endl;
    while (cin.get(c)) //当不知道循环次数有多少的时候用while，cin.get()函数是用户输入然后电脑一次读入一个字符。如果读入的是正常数据，返回的是true，如果读入是ctrl+z，则返回false
    //且cin.get()这个函数输入的时候是输入字符串在缓冲区呆着，然后一个一个读入字符，什么时候开始读入字符是当输入回车的时候开始读入的(读入回车之前的包括回车)
    {
        if (c != '\n')
        {
            if (c == key[ques])
            {
                numcorrect++;
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            ques++;
        }
        else
        {
            cout << "score" << static_cast<float>(numcorrect) / num_ques * 100 << "%";
            ques = 0;
            numcorrect = 0;
            cout << endl;
        }
    }
    return 0;
}
