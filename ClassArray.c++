#include <iostream>
using namespace std;
class Shop
{
private:
    int productID[100];
    int productPrice[100];
    int counter;

public:
    void init()
    {

        counter = 0;
    }
    void set();
    void get();
};

void Shop::set()
{

    cout << "Enter Product Name For Product No " << counter + 1 << ":" << endl;
    cin >> productID[counter];

    cout << "Enter Product Price For Product No " << counter + 1 << ":" << endl;
    cin >> productPrice[counter];
    counter++;
}
void Shop::get()
{
    cout << "Serial No"
         << "  Product ID "
         << "  Product Price" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << i + 1 << "        " << productID[i] << "        " << productPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.init();
    dukaan.set();
    dukaan.set();
    dukaan.get();

    return 0;
}