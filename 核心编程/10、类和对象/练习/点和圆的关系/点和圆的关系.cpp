# include <iostream>
# include "relation.h"
# include "relation.cpp"
using namespace std;

/*
class Point
{
public:
    // 获取横坐标
    // 获取纵坐标
    // 输出横坐标
    // 输出纵坐标
    void set_x(int x)
    {
        point_x = x;
    }
    void set_y(int y)
    {
        point_y = y;
    }
    int get_x()
    {
        return point_x;
    }
    int get_y()
    {
        return point_y;
    }

private:
    int point_x;
    int point_y;
};


class Circle
{
public:
    // 获取园的半径
    void set_r(int r)
    {
        p_r = r;
    }
    // 输出圆的半径
    int get_r()
    {
        return p_r;
    }
    // 设置圆心
    void set_center(Point &pp)
    {
        p_point = pp;
    }
    // 输出圆
    void isincenter(Point &p1)
    {
        int distance = (p1.get_x() - p_point.get_x())*(p1.get_x() - p_point.get_x()) + 
                        (p1.get_y() - p_point.get_y())*(p1.get_y() - p_point.get_y());

        if (distance < p_r*p_r)
        {
            cout << "点在圆内" << endl;
        }
        else if(distance == p_r*p_r)
        {
            cout << "点在圆上" << endl;
        }
        else
        {
            cout << "点在圆外" << endl;
        }
    }
//私有属性

private:
    int p_r;
    Point p_point;
};
*/


int main()
{
    Point pc;
    pc.set_x(0);
    pc.set_y(0);

    Point p1;
    p1.set_x(5);
    p1.set_y(5);

    Point p2;
    p2.set_x(5);
    p2.set_y(0);

    Point p3;
    p3.set_x(2);
    p3.set_y(2);

    Circle c1;
    c1.set_r(5);
    c1.set_center(pc);
    c1.isincenter(p1);
    c1.isincenter(p2);
    c1.isincenter(p3);

    system("pause");
    return 0;
}