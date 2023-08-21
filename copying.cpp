#include<iostream>
#include<cstring>

class String{
    private:
        char* m_Buffer;
        unsigned int m_Size;
    public:
        String(const char* string){
            m_Size = strlen(string);
            m_Buffer = new char[m_Size];
            // for(int i=0;i<m_Size;i++) m_Buffer[i] = string[i];
            memcpy(m_Buffer, string, m_Size);
            m_Buffer[m_Size] = '\0';
        
    }

    // String(const String& other) = delete;

    // Definition of the built-in copy constructor provided by C++ compiler  
    // String(const String& other)
    //     : m_Buffer(other.m_Buffer), m_Size(other.m_Size)
    // {

    // };
    // ----------------------------------------------------------------------
    // or you can write
    // String(const String & other){
    //     memcpy(this, &other, sizeof(String));
    // }
    String(const String& other)
        :m_Size(other.m_Size)   
    {
        std::cout << "Copied String" << std::endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

    }



   ~String(){
    delete[] m_Buffer;
   }

   char& operator[](unsigned int index){
        return m_Buffer[index];
   }
   friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string){
    stream << string.m_Buffer;
    return stream;
}



void PrintString(const String& string){
    std::cout << string << std::endl;
}


int main(){
    String string  = "Seth";
    String second  = string; // we want the second string to have its own block of memory, in other words, it is pointing to its own block of memory, 
    // so that when we perform operations on the first string, the second one will not be affected.
    // and vice versa and the way we do that is deep copy.

    // A shallow copy only copies the values of the object and it won't copy the value that the object is pointing to. 
    // A deep copy, by definition, copies an object in its entirety. 

    // To perform a deep copy, you need to write your own copy constructor instead of the default  one provided by the compiler.
    // The default one performs a shallow copy, a mem-copy, copying the memory the other object into the class's members.
    // We want to avoid that.


    // Always pass your object by reference, although sometimes one should pass by value




    second[2] = '-';
    
    PrintString(string);
    PrintString(second);








    std::cin.get();
}



