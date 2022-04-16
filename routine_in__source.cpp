// Wap to change polar coordinate into rectangular coordinate where the routine is in source class.
// paxadi ko source
// r=p
#include <iostream>
#include <cmath>
using namespace std;
class rectangular
{
    float x, y;

public:
    rectangular()
    {
        x = 0;
        y = 0;
    }
    rectangular(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The value of x is " << x << " and y= " << y << endl;
    }
};
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
    operator rectangular()
    {
        float s, t;
        s = r * cos(a);
        t = r * sin(a);
        return rectangular(s, t);
    }
};

int main()
{
    rectangular r;
    polar p(23.245, 60);
    r = p;
    cout << "Polar coordinate : " << endl;
    p.display();
    cout << "Rectangular coordinate is :" << endl;
    r.display();
    return 0;
}