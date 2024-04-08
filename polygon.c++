#include <iostream>
#include <cmath>
using namespace std;

class Polygon
{
private:
    int sides;
    float *lengths;

public:
    Polygon()
    {
        sides = 0;
        lengths = nullptr;
    }

    Polygon(int sides, float lengths[])
    {
        if (sides <= 2)
        {
            cout << "Invalid input";
            return;
        }
        else
        {
            this->sides = sides;
            this->lengths = new float[sides];
            for (int i = 0; i < sides; i++)
            {
                this->lengths[i] = lengths[i];
            }
        }
    }

    ~Polygon()
    {
        delete[] lengths;
    }

    float findPerimeter()
    {
        float p = 0;
        for (int i = 0; i < sides; i++)
        {
            p += lengths[i];
        }
        return p;
    }

    float findArea(float R)
    {
        float A = 0.0;
        for (int i = 0; i < sides; i++)
        {
            A += (0.5 * lengths[i] * R * sin(2 * M_PI / sides));
        }
        return A;
    }
};

int main()
{
    cout << "Enter Number of Sides: ";
    int sides;
    cin >> sides;
    float len[sides];
    cout << "Enter radius for polygon: ";
    float r;
    cin >> r;

    cout << "Enter Length of " << sides << " Sides: ";
    for (int i = 0; i < sides; i++)
    {
        cin >> len[i];
    }

    Polygon p1(sides, len);
    cout << "Area: " << p1.findArea(r) << endl;
    cout << "Perimeter: " << p1.findPerimeter() << endl;

    return 0;
}
