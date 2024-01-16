#include "Hfiles/PatronRecord.h"

void PatronRecord::addBook(const BookItem& book) {
    borrowedBooks.push_back(book);
}

bool PatronRecord::removeBook(const std::string& isbn) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
        if (it->getISBN() == isbn) {
            borrowedBooks.erase(it);
            return true;
        }
    }
    return false;
}