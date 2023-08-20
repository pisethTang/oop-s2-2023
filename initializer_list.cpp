#include<iostream>

#include<string>


class Example{
    public:
        Example(){
            std::cout << "Created Entity!" << std::endl;
        }
        Example(int x){
            std::cout << "Created Entity with " << x << "!" << std::endl;
        }
};

class Entity{
    private:
        std::string m_Name;
        int m_Score;
        Example m_Example;
        // int x,y,z;

    public:
        Entity() // list the initializer list in order, and even if you don't, the class members will be assigned values based on 
        // the order that they are declared/defined, if we break the order, it can lead to all sort of dependency problems.
            :m_Name("Unknwon"), m_Example(10)
        {
            // m_Name = "hello"; //now we don't need to do this
            // m_Name will be constructed twice, one with the default constructor and the other one in this line
            // the m_Example object that has been created by the default constructor is thrown away => waste of performance
            // m_Example = Example(8);
        }

        

        Entity(const std::string& name)
            // :m_Name(name)
        {   
            
            m_Name = name; 
        }

        const std::string& GetName() const{
            return m_Name;
        }
};




int main(){

    Entity e0;
    // std::cout << e0.GetName() << std::endl;

  

    std::cin.get();
}


// Reasons for using the initializer list:
// 1. Code style POV: remove clutters, if you have a lot of member variables and it might be hard to see what the constructor is doing, some trivial 
//and boring task, you want to hide them ==> cleaner and easier to read
// 2. Functional POV: taht applies with object(complex variables), 
// 