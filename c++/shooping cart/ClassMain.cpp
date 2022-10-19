#include <bits/stdc++.h>
#include "DataModel.h"
using namespace std;

vector<Product> allproducts = {
    Product(1, "apple", 26),
    Product(3, "mango", 16),
    Product(2, "guava", 36),
    Product(5, "banana", 56),
    Product(4, "strawberry", 29),
    Product(6, "pineapple", 20),
};

Product *chooseproduct()
{
    // display the list of products
    string productlist;
    cout << "available products" << endl;

    for (auto product : allproducts)
    {
        productlist.append(product.getDisplayName());
    }
    cout << productlist << endl;

    cout << "-------------------------" << endl;

    string choice;
    cin >> choice;

    for (int i = 0; i < allproducts.size(); i++)
    {
        if (allproducts[i].getshortname() == choice)
        {
            return &allproducts[i];
        }
    }
    cout << "product not found" << endl;
    return NULL;
}

bool checkout(cart &cart1)
{
    if (cart1.isempty())
    {
        return false;
    }

    int total = cart1.gettotal();
    cout << "pay in cash" << endl;

    int paid;
    cin >> paid;

    if (paid >= total)
    {
        cout << "change: Rs." << paid - total << endl;
        cout << "thank you for shooping!" << endl;
        return true;
    }
    else
    {
        cout << "not enough cash" << endl;
        ;
        return false;
    }
}

int main()
{

    char action;
    cart cart1;

    while (true)
    {

        cout << "Select an action -  (a)dd item, (v)iew cart, (c)heckout" << endl;
        cin >> action;

        if (action == 'a')
        {
            // add to cart
            // view all products + choose products + add to  the cart
            Product *product = chooseproduct();
            if (product != NULL)
            {
                cout << "added to the cart " << product->getDisplayName() << endl;
                cart1.addproduct(*product);
            }
        }
        else if (action == 'v')
        {
            // view cart
            cout << "--------------------" << endl;
            cout << cart1.viewcart();
            cout << "--------------------" << endl;
        }
        else
        {
            // checkout
            cart1.viewcart();
            if (checkout(cart1))
            {
                break;
            }
        }
    }

    return 0;
}