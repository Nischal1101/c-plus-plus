#include <iostream>
using namespace std;
class convert
{
    float feet, inches;

public:
    convert()
    {
        feet = 0;
        inches = 0;
    }
    convert(float f, float i)
    {
        feet = f;
        inches = i;
    }
    operator float()
    {
        float f = inches / 12;
        f += feet;
        return (f / 3.28084);
    }
};
int main()
{
    convert nischal(3, 3.7);
    float meter;
    meter = nischal;
    cout << "The value of meter is " << meter << endl;
    return 0;
}