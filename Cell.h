#ifndef CELL_H
#define CELL_H

#include <tuple>


class Cell{
    protected:
        std::tuple<int , int> position;
        char type;
    public:
        Cell(int x, int y, char type): position(x,y), type(type){ }
        
        // getters and setters
        std::tuple<int , int> getPos(){return position;}
        char getType(){return type;}

        void setPos(int x, int y){
            std::get<0>(position) = x;
            std::get<1>(position) = y;
        }
        void setType(char type){ this -> type = type;}

        


};


#endif