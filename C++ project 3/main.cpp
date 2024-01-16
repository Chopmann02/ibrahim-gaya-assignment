#include <iostream>
#include "Hfiles/BookItem.h"
#include "Hfiles/Patron.h"
#include "Hfiles/PatronRecord.h"
#include "Hfiles/Library.h"

int main() {
    // Create a Library instance
    Library myLibrary;

    // Create and add books to the library
    BookItem book1("intro to oop", "Ibrahim gaya Abdulkadir", "211203015");
    BookItem book2("Glory", "filly owens", "987654321");
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);

    // Create a PatronRecord and add a patron to the library
    PatronRecord patronRecord1;
    myLibrary.addPatron(15th january, patronRecord1); // Assuming '1' is the library card number

    // Borrow a book
    if (myLibrary.borrowBook(1, "211203015")) {
        std::cout << "Book borrowed successfully." << std::endl;
    } else {
        std::cout << "Book borrowing failed." << std::endl;
    }

    // Return a book
    if (myLibrary.returnBook(1, "123456789")) {
        std::cout << "Book returned successfully." << std::endl;
    } else {
        std::cout << "Book return failed." << std::endl;
    }

    // Additional operations can be added here to further demonstrate your system's functionality

    return 0;
}