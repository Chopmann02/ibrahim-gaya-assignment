#include "Hfiles/BookItem.h"

BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

std::string BookItem::getAuthor() const {
    return author;
}

void BookItem::setAuthor(const std::string& author) {
    this->author = author;
}

std::string BookItem::getISBN() const {
    return isbn;
}

void BookItem::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}