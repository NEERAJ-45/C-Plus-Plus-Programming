#include <iostream>
using namespace std;
#define max 10
class Shop
{
private:
    int itemPrice[max];
    int itemId[max];
    int count;

public:
    void initCount(void) { count = 0; }
    void setPrice(void);
    void getPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id for Item no " << count + 1 << ":" << endl;
    cin >> itemId[count];
    cout << "Enter Price for Item no " << count + 1 << ":" << endl;
    cin >> itemPrice[count];
    count++;
}
void Shop::getPrice(void)
{
    for (int i = 0; i < count; i++)
    {

        cout << "The Price for Item Id " << itemId[i] << " is " << itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dMart;
    dMart.initCount();
    system("cls");
    for (int i = 0; i <= 3; i++)
    {
        dMart.setPrice();
            
    }

    dMart.getPrice();

    return 0;
}