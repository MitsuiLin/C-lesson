# include "relation.h"

void Point::set_x(int x)
{
    point_x = x;
}
void Point::set_y(int y)
{
    point_y = y;
}
int Point::get_x()
{
    return point_x;
}
int Point::get_y()
{
    return point_y;
}


// 获取园的半径
void Circle::set_r(int r)
{
    p_r = r;
}
// 输出圆的半径
int Circle::get_r()
{
    return p_r;
}
// 设置圆心
void Circle::set_center(Point &pp)
{
    p_point = pp;
}
// 输出圆
void Circle::isincenter(Point &p1)
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