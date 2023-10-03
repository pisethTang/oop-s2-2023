#ifndef PRODUCE_H
#define PRODUCE_H
#include <string>


class Produce{
    protected:
        std::string name;
        int cost_per_day;
        int selling_price;
        int buying_price;
    public:
        Produce();
        Produce(std::string newName, int newCost, int newSellPrice, int newBuyPrice);

        //functions
        std::string getName();
        int getCostPerDay();
        int getSellingPrice();
        int getBuyingPrice();
        void setSellingPrice(int newSellPrice);
        
        
};




#endif