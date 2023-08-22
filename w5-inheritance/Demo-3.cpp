#include <iostream>
#include <string>

// #define LOG(x) std::cout << x << std::endl;
using namespace std;

class Publication{
    protected:
        string title;
        string author;
        int year;
    public:
        Publication(string title, string author, int year)
            :title(title), author(author), year(year){}
        // Publication()
        //     :title("No title"), author("No Author"), year(0)
        // {}
        Publication(): Publication("No Title", "No Author", 0){}; // default constructor
        void print(){
            std::cout << "Title: " << this -> title << std::endl;
            std::cout << "Author: " << this -> author << std::endl;
            std::cout << "Year: " << this -> year << std::endl;
        }

};

class Book: public Publication{
    private:
        string publisher;
        int num_pages;
        int ISBN;
    public:
        Book(string title, string author, int year, string publisher, 
            int num_pages, int ISBN)
            : Publication(title, author, year), 
            publisher(publisher), num_pages(num_pages),ISBN(ISBN){}
        Book(): Book("No Title", "No Author", 0, "No Publisher", 0,0){}

        // this is called modifying, there is another concept called overloading
        // void print(){
        //     Publication::print(); // call the parent's print() method to print the publication details
        //     cout << "Pages: " << this->num_pages << endl;
        //     cout << "ISBN: " << this-> ISBN << endl;
        //     cout << "Publisher: " << this-> publisher << endl;
        // }

// -------------------------------------------------------------------------------------------------------------------
        //overloading: reimplementing the parent's method, changing the signature(type of arguments)
        void print(bool short_print){
            if(short_print){
                Publication::print();
            }
            else{
                Publication::print();
                cout << "Pages: " << this->num_pages << endl;
                cout << "ISBN: " << this-> ISBN << endl;
                cout << "Publisher: " << this-> publisher << endl;
            }
        }

};





int main(){
    bool s = true;
    Book b; // call the default constructor
    b.print(!s);
    std::cout << "------------------------------" <<std::endl;
    Book b1("Type Theory", "Seth", 2023, "University of Adelaide", 600, 1992812);
    // b1.print();
    b1.print(s);
    std::cout << "-------------------------------" <<std::endl;
    b1.Publication::print();


    std::cin.get();
}