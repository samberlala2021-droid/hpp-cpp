#pragma once
#include<string>

class Book {
    private:
        int id;
        std::string title;
    public:
        Book();
        Book(int id, std::string title);
    
        int get_id();
        std::string get_title();

        void set_id(int id);
        void set_title(std::string title);
};