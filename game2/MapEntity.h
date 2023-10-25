#ifndef MAPS_ENTITY_H
#define MAPS_ENTITY_H
#include <tuple>


class MapEntity{
    private:
        std::tuple<int , int> position;
        char symbol;
    public:
        MapEntity(int x, int y, char symbol): position(x,y), symbol(symbol) { }
        
        // getters and setters
        std::tuple<int , int> getPosition() const {return position;}
        char getSymbol() const {return symbol;}
        
        void setPosition(int x, int y){
            std::get<0>(this -> position) = x;
            std::get<1>(this -> position) = y;
        }
        void setSymbol(char symbol){
            this -> symbol = symbol;
        }

        virtual ~MapEntity(){

        }

};






#endif
