#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        img = real = 0;
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator+(Complex &C)
    {
        Complex CC;
        CC.img = img - C.img;
        CC.real = real - C.real;
        return CC;
    }
    void show()
    {
        cout << real << " - " << img;
    }
};
int main()
{
    Complex C1(23, 34);
    Complex C2(56, 76);
    Complex C3 = C2 + C1;
    C3.show();
    return 0;
}