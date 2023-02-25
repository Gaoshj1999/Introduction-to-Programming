//从文件读入一个二进制记录到一个结构中
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct salartinfo
{
    unsigned id;
    double salary;
};
int main()
{
    salartinfo employee1 = {600001, 8000};
    ofstream os("payroll", ios_base::out | ios_base::binary);
    os.write(reinterpret_cast<char *>(&employee1), sizeof(employee1));
    os.close();
    ifstream is("patroll", ios_base::in | ios_base::binary);
    if (is)
    {
        salartinfo employee2;
        is.read(reinterpret_cast<char *>(&employee2), sizeof(employee2));
        cout << employee2.id << " " << employee2.salary << endl;
    }
    else
    {
        cout << "error:cannot open file 'payroll'." << endl;
    }
    is.close();
    return 0;
}
