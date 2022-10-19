#include <string>
#include <unordered_map>
using namespace std;
// forward declaration
class item;
class cart;
class Product
{

    int id;
    string name;
    int price;

public:
    Product()
    {
    }
    Product(int u_id, string name, int price)
    {
        // assignment
        id = u_id;
        this->name = name;
        this->price = price;
    }
    string getDisplayName()
    {
        return name + " : Rs." + to_string(price) + "\n";
    }
    string getshortname()
    {
        return name.substr(0, 1);
    }
    // to access members by class item
    friend class item;
    friend class cart;
};

class item
{
    Product product;
    int quantity;

public:
    // initalisation list
    // as this members are private we need friend function
    item() {}
    item(Product p, int q) : product(p), quantity(q) {}

    int getitemprice()
    {
        return quantity * product.price;
    }
    string getiteminfo()
    {
        return to_string(quantity) + " x " + product.name + " Rs." + to_string(quantity * product.price) + "\n";
    }
    friend class cart;
};

class cart
{
    // used hashmapping
    // which is called unorderedmap in c++
    unordered_map<int, item> items;

public:
    void addproduct(Product product)
    {
        if (items.count(product.id) == 0)
        {
            item newitem(product, 1);
            items[product.id] = newitem;
        }
        else
        {
            items[product.id].quantity += 1;
        }
    }

    int gettotal()
    {
        int total = 0;
        for (auto itempair : items)
        {
            auto item = itempair.second;
            total += item.getitemprice();
        }
        return total;
    }

    string viewcart()
    {
        if (items.empty())
        {
            return "cart is empty";
        }
        string itemizedlist;
        int carttotal = gettotal();

        for (auto itempair : items)
        {
            auto item = itempair.second;
            itemizedlist.append(item.getiteminfo());
        }

        return itemizedlist + "\n total amount : Rs." + to_string(carttotal) + "\n";
    }
    bool isempty()
    {
        return items.empty();
    }
};