#include <iostream>
using namespace std;

class ItemDetails
{
public:
    int item_no;
    string item_name;
    float item_price;
};
class DiscountedItem : public ItemDetails
{
public:
    int discount;
    int discounted_price;
    void getItem()
    {
        cout << "Item Name : ";
        cin >> item_name;
        cout << "Item No. : ";
        cin >> item_no;
        cout << "Item Price : ";
        cin >> item_price;
        cout << "Discount Percent : ";
        cin >> discount;
        discounted_price = item_price - (item_price * discount / 100);
    }
    void displayItem()
    {
        cout << "Item Name : " << item_name;
        cout << "Item No. : " << item_no;
        cout << "Item Price : " << item_price;
        cout << "Discounted Price : " << discounted_price;
    }
};
int main()
{

    return 0;
}