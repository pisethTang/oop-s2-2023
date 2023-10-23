#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item{
    protected:
        std::string name;
        int weight;
    public:
        Item(const std::string& name, int weight): name(name), weight(weight){ }
        Item(): Item("NaN",0){ }
        // getters
        std::string getName() const {return name;}
        int getWeight() const {return weight;}

        // setters
        void setName(std::string name)  { this -> name = name;}
        void setWeight(int weight) { this -> weight = weight;}


};





#endif