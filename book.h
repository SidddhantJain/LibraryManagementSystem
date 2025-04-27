// book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool isAvailable;

public:
    Book(std::string t, std::string a);

    void borrowBook();
    void returnBook();
    bool checkAvailability() const;
    void display() const;
    std::string getTitle() const;
};

#endif // BOOK_H
