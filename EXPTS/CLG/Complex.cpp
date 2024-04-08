#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = img = 0;
    }
    Complex(int R, int I)
    {
        real = R;
        img = I;
    }
    int getReal()
    {
        return real;
    }
    int getImage()
    {
        return img;
    }
};
int main()
{
    Complex C1(4,21);
    cout << "Complex Number: "<<C1.getReal()<<" + " <<C1.getImage()<<"i"<<endl;

    return 0;
}