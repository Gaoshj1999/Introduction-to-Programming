//向二进制文件输出
#include <fstream>
using namespace std;
struct date
{
    int mon, day, year;
};
int main()
{
    date dt = {6, 10, 92};//将内存中存储的二进制形式直接写到磁盘中
    ofstream file("date.dat", ios_base::binary);
    file.write(reinterpret_cast<char *>(&dt), sizeof(dt));//为了符合函数格式强行转化格式
    file.close();
    return 0;
}
