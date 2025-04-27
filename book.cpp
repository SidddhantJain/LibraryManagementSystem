// book.cpp
#include "book.h"
#include <iostream>

Book::Book(std::string t, std::string a) {
    title = t;
    author = a;
    isAvailable = true;
}

void Book::borrowBook() {
    if (isAvailable) {
        isAvailable = false;
        std::cout << "Book borrowed successfully.\n";
    } else {
        std::cout << "Sorry, this book is already borrowed.\n";
    }
}

void Book::returnBook() {
    if (!isAvailable) {
        isAvailable = true;
        std::cout << "Book returned successfully.\n";
    } else {
        std::cout << "This book was not borrowed.\n";
    }
}

bool Book::checkAvailability() const {
    return isAvailable;
}

void Book::display() const {
    std::cout << "Title: " << title << ", Author: " << author
              << ", Available: " << (isAvailable ? "Yes" : "No") << "\n";
}

std::string Book::getTitle() const {
    return title;
}
