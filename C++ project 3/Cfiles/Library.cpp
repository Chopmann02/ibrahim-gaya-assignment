#include "Hfiles/Library.h"

void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

void Library::addPatron(int libraryCardNumber, const PatronRecord& record) {
    patronRecords[libraryCardNumber] = record;
}

bool Library::borrowBook(int libraryCardNumber, const std::string& isbn) {
    // Implementation details...
    // Make sure this matches the declaration in Library.h
}

bool Library::returnBook(int libraryCardNumber, const std::string& isbn) {
    // Implementation details...
    // Make sure this matches the declaration in Library.h
}