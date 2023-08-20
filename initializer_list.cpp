#include<iostream>

#include<string>

class Entity{
    private:
        std::string m_Name;
        int m_Score;
        int x,y,z;

    public:
        Entity() // list the initializer list in order, and even if you don't, the class members will be assigned values based on 
        // the order that they are declared/defined, if we break the order, it can lead to all sort of dependency problems.
            :m_Name("Unknwon"), m_Score(0)
        {
            // m_Name = "Unknwon"; now we don't need to do this
        }

        Entity(const std::string& name)
            :m_Name(name), x(0), y(10), z(200)
        {   
           
            // m_Name = name;    
        }

        const std::string& GetName() const{
            return m_Name;
        }


};


int main(){

    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("Seth");
    std::cout << e1.GetName() << std::endl;

    std::cin.get();
}