#include"book.hpp"

Book::Book() : id(0), title("N/A"){} 
Book::Book(int id, std::string title) : id(id), title(title){}

int Book::get_id(){
    return id;
}
std::string Book::get_title(){
    return title;
}

void Book::set_id(int id){
    this->id = id;
}
void Book::set_title(std::string title){
    this->title = title;
}