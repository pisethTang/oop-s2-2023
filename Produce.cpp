#include "Produce.h"

Produce::Produce(std::string newName, int newCost, int newSellPrice, int newBuyPrice){
    name = newName;
    cost_per_day = newCost;
    selling_price = newSellPrice;
    buying_price = newBuyPrice;
}

Produce::Produce(): Produce("", 0,0,0){}

//functions
std::string Produce::getName(){
    return name;
}

int Produce::getCostPerDay(){
    return cost_per_day;
}

int Produce::getSellingPrice(){
    return selling_price;
}

int Produce::getBuyingPrice(){
    return buying_price;
}

void Produce::setSellingPrice(int newSellPrice){
    selling_price = selling_price + newSellPrice;
}