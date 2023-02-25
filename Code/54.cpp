//枚举类
#include <iostream>
using namespace std;
//enum class 枚举类型名：底层类型{枚举值列表}；
//这里如果不定义底层类型就默认为int类型就和枚举型一样了，但是这里可以定义其他的底层类型
//枚举类有三个特点
//第一个：强作用域
//使用枚举类暂定type的枚举值general，就一定要写成type::general，这就保证了枚举类之间的参数不会重名
//第二个转换限制
//枚举类对象不可以与整型隐式地互相转化
//第三个可以指定底层类型
enum class side
{
    right,
    left
};
enum class thing
{
    wrong,
    right
};
enum class t:char//这里表明可以指定底层类型
{
    r
};
int main()
{
    side s = side::right;
    thing w = thing::wrong;
    // s==w 这里就不能比较两者，这说明转换控制更严格了
    return 0;
}