# pragma once
# include <iostream>
using namespace std;

class Point
{
public:
    void set_x(int x);
    void set_y(int y);
    int get_x();
    int get_y();
private:
    int point_x;
    int point_y;
};


class Circle
{
public:
    // 获取园的半径
    void set_r(int r);
    // 输出圆的半径
    int get_r();
    // 设置圆心
    void set_center(Point &pp);
    // 输出圆
    void isincenter(Point &p1);
private:
    int p_r;
    Point p_point;
};