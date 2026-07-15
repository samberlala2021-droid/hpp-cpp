#include<iostream>
#include"demo.hpp"
#include"book.hpp"
using namespace std;
int main(){
    system("cls");
    
    cout<<add(500,500)<<endl;

    Book book(67,"How to get rich without studying!");
    cout<<book.get_id()<<endl;
    cout<<book.get_title()<<endl;
    
    return 0;
}