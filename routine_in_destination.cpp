// wap to change polar coordinate into rectangular coordinate(r=p) where routine is in destination class.
#include <iostream>
#include <cmath>
using namespace std;
class polar
{
    float a, r;

public:
    polar()
    {
        a = 0;
        r = 0;
    }
    polar(float m, float n)
    {
        a = m;
        r = n;
    }
    void display()
    {
        cout << "a= " << a << " and r= " << r << endl;
    }
    float get_a()
    {
        return a;
    }
    float get_r()
    {
        return r;
    }
};
class rectangular
{
    float x, y;

public:
    rectangular()
    {
        x = 0;
        y = 0;
    }
    //     rectangular(float l, float k)
    //     {
    // x=l;
    // y=k;
    //     }
    void display()
    {
        cout << "x= " << x << "and y= " << y << endl;
    }
    rectangular(polar p)
    {

        x = p.get_r() * (cos(p.get_a()));
        y = p.get_r() * (sin(p.get_a()));
    }
};
int main()
{
    polar p1(40.43, 45);
    rectangular r;
    r = p1;
    cout << "polar coordinate is " << endl;
    p1.display();
    cout << "Rectangular coordinate is " << endl;
    r.display();
    return 0;
}