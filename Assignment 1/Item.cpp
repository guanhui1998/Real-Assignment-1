#include "Item.h"

Item::Item()
{

}

Item::Item(const string& kName, const int& durability_)
{
    
    
}

Item::~Item()
{
    
}

void Item::receiveDamage(const int &)
{

}

const int Item::getDurability()
{
    if (durability_ < 1)
    {
        cout << "Item is destoyed" << endl;
        return 0;
    }
    return durability_;
}
