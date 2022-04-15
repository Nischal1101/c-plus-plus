// conversion of basic data type to userdefined data type
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
    convert(float m)
    {
        int total_f;
        feet = m * 3.28084;
        total_f = int(feet);
        inches = (feet - total_f) * 12;
    }
    void display()
    {
        cout << "The value of feet is " << feet << endl;
        cout << "The value of inches is " << inches << endl;
    }
};
int main()
{
    float meter;
    cout << "Enter the value of meter " << endl;
    cin >> meter;
    convert nischal(meter);
    nischal = meter;
    nischal.display();
    return 0;
}