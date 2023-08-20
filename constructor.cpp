#include<iostream>


class Entity{
    public:
        float X, Y;
        Entity()
        {
            X = 0.0f;
            Y = 0.0f;
        }

        Entity (float x, float y){
            X = x;
            Y = y;
        }
        void Print(){
            std::cout << X << ", " << Y << "\n";
        }
        // void Init(){
        //     X = 0.0f;
        //     Y = 0.0f;
        // }
};

class Log{
    private:
        Log(){}
    public:
    // Log() = delete;
    static void Write(){

    }

};



int main(){
    Log::Write();
    Log l;

    Entity e;
    // e.Init();
    std::cout << e.X << std::endl;
    e.Print();  
    // We get semmingly random values that's because when we instantiated that entity and allocated memory for it,
    // we did not initialize it, so everything that was there(leftover) before will get printed into the console and this is why the concept of initialization is important,
    // So we want to somehow initialize it to 0 or empty so out position is 0 by default, we don't specify it or explicitly set a posiiton.
    Entity e1;
    e1.Print();

    // Even if you don't specify a constructor, C++ has a built-in constructor but it does literally nothing.
    //  It goes like this: class_name(){} so it doesn't initialize your variables.
    // In language such as Java, primitive types such as ints or floats are automatically set to 0, that's not the 
    // case for C++. So if you don't initialize your class's members in C++ then they will be set to whatever were leftover from the memory


    Entity e2(10, 5);
    e2.Print();


    std::cin.get();
}