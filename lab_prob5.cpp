#include <iostream>
#include <string>
using namespace std;

class ShoppingCart
{
    int productID;
    string productName;
    float price;
    int quantity;

public:
    ShoppingCart()
    {
        productID = 0;
        productName = "";
        price = 0;
        quantity = 0;
    }
    ShoppingCart(int id, string name, float p)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = 0;
    }
    void addProduct(int id, string name, float p)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = 1;
    }
    void addProduct(int id, string name, float p, int q)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }
    void display()
    {
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Subtotal     : " << price * quantity << endl;
    }
    friend float calculateBill(ShoppingCart cart[], int size);
};


float calculateBill(ShoppingCart cart[], int size)
{
    float total = 0;

    for (int i = 0; i < size; i++)
    {
        total += cart[i].price * cart[i].quantity;
    }

    return total;
}
int main()
{
    
    ShoppingCart cart[3];

    cart[0].addProduct(101, "Laptop", 50000);

    cart[1].addProduct(102, "Mouse", 1000, 2);

    cart[2].addProduct(103, "Keyboard", 2000, 3);

    cout << "===== SHOPPING CART =====" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cout << "-----------------" << endl;
        cart[i].display();
    }
    cout << "\n===== TOTAL BILL =====" << endl;
    cout << "Total Bill : " << calculateBill(cart, 3) << endl;

    return 0;
}
