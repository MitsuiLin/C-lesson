# include <iostream>
using namespace std;

class Cube
{
// 获取长宽高
// 输出长宽高
// 求立方体表面积
// 求立方体体积
public:
    void set_l(int l)
    {
        c_l = l;
    }
    void set_w(int w)
    {
        c_w = w;
    }
    void set_h(int h)
    {
        c_h = h;
    }
    int get_l()
    {
        return c_l;
    }
    int get_w()
    {
        return c_w;
    }
    int get_h()
    {
        return c_h;
    }
    int get_s()
    {
        return 2*((c_l * c_w) + (c_h * c_w) + (c_l * c_h));
    }
    int get_v()
    {
        return c_l * c_h * c_w;
    }
    bool issame(Cube & c2)
    {
        if ((c_l == c2.get_l()) & (c_h == c2.get_h()) & (c_w == c2.get_w()))
        {
            return true;
        }
        return false;
    }

private:
    int c_l;
    int c_w;
    int c_h;
};

bool issame(Cube &c1, Cube &c2)
{
    if ((c1.get_h() == c2.get_h()) & (c1.get_l() == c2.get_l()) & (c1.get_w() == c2.get_w()))
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.set_l(10);
    c1.set_w(10);
    c1.set_h(10);

    Cube c2;
    c2.set_l(11);
    c2.set_w(10);
    c2.set_h(10);


    cout << "立方体c1的表面积为：" << c1.get_s() << endl;
    cout << "立方体c1的体积为：" << c1.get_v() << endl;
    cout << "两个立方体是否相等：" << issame(c1, c2) << endl;
    cout << "两个立方体是否相等：" << c1.issame(c2) << endl;

    system("pause");
    return 0;
}