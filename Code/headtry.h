class point
{
private:
    int x;
    int y;
    static int count; //分开文件的时候静态数据成员就不能在类内定义了
public:
    point(int x=0, int y=0):x(x),y(y){}
    ~point()
    {
        count--;
    }
    point(const point &a);
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
    static void showcount(); //static 静态函数成员是无法加const的
};