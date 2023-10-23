#ifndef INVENTORY_UTILS_H
#define INVENTORY_UTILS_H
#include "Item.h"


class InventoryUrils{
    public:
        static bool isHeavy(const Item& item, int threshold){
            if (item.getWeight() > threshold) return true;
            return false;
        }
        
};





#endif