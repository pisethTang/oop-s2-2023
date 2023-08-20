#include<iostream>


class Entity{
    public:
        float X, Y;
        Entity()
        {

            X = 0.0f;
            Y = 0.0f;
            std::cout << "Created Entity!" <<std::endl;
        }

        // Entity (float x, float y){
        //     X = x;
        //     Y = y;
        // }
        ~Entity(){
            std::cout << "Destroyed Entity!" << std::endl;
        }
        void Print(){
            std::cout << X << ", " << Y << "\n";
        }
        // void Init(){
        //     X = 0.0f;
        //     Y = 0.0f;
        // }
};





int main(){
    Entity e;


    // e.Init();
    // std::cout << e.X << std::endl;
    // e.Print();  




    // std::cin.get();
}
// After the main function ends/terminates, the class object e will get deleted and so the destructor is called. That is because the object is stack-allocated


/*
A destructor is called when an instance is destroyed/deleted.
A constructor sets and default-initialize class's members or variables whether they are stack-based or heap-based.
A destructor is called to counter-act or undo all of that, to erase those variables or free up dynamically allocated space.
The destructor applies to both stack and heap objects.




*/