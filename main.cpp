// main.cpp
#include <iostream>
#include <vector>
#include "book.h"

void displayMenu() {
    std::cout << "\n=== Library Management System ===\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Borrow Book\n";
    std::cout << "3. Return Book\n";
    std::cout << "4. Display All Books\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    std::vector<Book> library;
    int choice;
    std::string title, author;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); // To ignore leftover newline character

        switch (choice) {
            case 1:
                std::cout << "Enter book title: ";
                getline(std::cin, title);
                std::cout << "Enter book author: ";
                getline(std::cin, author);
                library.push_back(Book(title, author));
                std::cout << "Book added successfully!\n";
                break;

            case 2:
                std::cout << "Enter book title to borrow: ";
                getline(std::cin, title);
                for (auto& book : library) {
                    if (book.getTitle() == title) {
                        book.borrowBook();
                        break;
                    }
                }
                break;

            case 3:
                std::cout << "Enter book title to return: ";
                getline(std::cin, title);
                for (auto& book : library) {
                    if (book.getTitle() == title) {
                        book.returnBook();
                        break;
                    }
                }
                break;

            case 4:
                std::cout << "\n--- Book List ---\n";
                for (const auto& book : library) {
                    book.display();
                }
                break;

            case 5:
                std::cout << "Exiting the system. Goodbye!\n";
                break;

            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
