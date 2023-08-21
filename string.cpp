#include<iostream>
#include<string>

#define LOG(x) std::cout << x << std::endl;

int main(){
    const char* name = "Seth"; // C-style way of defining string, 
    // we also don't need to add the const keyword, and string is immutable in C++
    // even though it is a char pointer, we don't use the delete operator on "name" such as delete[] name or delete name

    // rule of thumb: if we don't use the new keyword, don't use the delete keyword
    // name[2] = 'a'; illegal

    char name1[6] = {'S', 'e', 't', 'h'};
    char name2[6] = {'S', 'e', 't', 'h', '\0'};
    LOG(name1);
    LOG(name2);
    

    std::string n = "1991sadksad";


    

    LOG(n);



  



    return 0;
}