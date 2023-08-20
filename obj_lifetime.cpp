#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;

class Entity{
public:
    Entity(){
        LOG("Created Entity!");
    }
    ~Entity(){
        LOG("Destroyed Entity!");
    }

};  


void* CreateArray(int *a){
    // fill our array

}


int main(){
    int array[50];
    CreateArray(array);

    {
    Entity* e = new Entity();
    }
    std::cin.get();
}




