#include <iostream>
#include <string>
using namespace std;

class Library
{
public:
    
    class Book
    {
        int bookID;
        string bookName;
        string authorName;
        float price;

    public:

        Book()
        {
            bookID = 0;
            bookName = "Unknown";
            authorName = "Unknown";
            price = 0;
        }

        
        Book(int id, string name, string author, float p)
        {
            bookID = id;
            bookName = name;
            authorName = author;
            price = p;
        }

        
        void display()
        {
            cout << "Book ID     : " << bookID << endl;
            cout << "Book Name   : " << bookName << endl;
            cout << "Author Name : " << authorName << endl;
            cout << "Price       : " << price << endl;
        }

        
        friend void compareBooks(Book b1, Book b2);

        
        ~Book()
        {
            cout << "Destructor called for Book: "
                 << bookName << endl;
        }
    };
};


void compareBooks(Library::Book b1, Library::Book b2)
{
    cout << "\n===== PRICE COMPARISON =====" << endl;

    if (b1.price > b2.price)
    {
        cout << b1.bookName << " is more expensive." << endl;
    }
    else if (b2.price > b1.price)
    {
        cout << b2.bookName << " is more expensive." << endl;
    }
    else
    {
        cout << "Both books have the same price." << endl;
    }
}

int main()
{
    
    Library::Book b1(101, "C++ Programming", "Bjarne Stroustrup", 800);
    Library::Book b2(102, "Python Basics", "Guido van Rossum", 600);

    cout << "===== BOOK 1 DETAILS =====" << endl;
    b1.display();

    cout << "\n===== BOOK 2 DETAILS =====" << endl;
    b2.display();

    
    compareBooks(b1, b2);

    return 0;
}
