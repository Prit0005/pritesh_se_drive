#include <iostream>
#include <string>
using namespace std;
class library
{

public:
    int price, page;
    string name, author, publication;

    void all(string bookname, string author, int page, int price, string Publication)
    {
        this->name = bookname;
        this->author = author;
        this->page = page;
        this->price = price;
        this->publication = Publication;
    }
};
int main()
{
    library obj;
    obj.all("lordoflove", "pritesh", 100, 1000000, "patel");
    cout << "Book Name: " << obj.name << endl;
    cout << "Author: " << obj.author << endl;
    cout << "Pages: " << obj.page << endl;
    cout << "Price: " << obj.price << endl;
    cout << "Publication: " << obj.publication << endl;
}
