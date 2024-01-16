#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "BookItem.h"

class PatronRecord {
private:
    std::vector<BookItem> borrowedBooks;

public:
    void addBook(const BookItem& book);
    bool removeBook(const std::string& isbn);
};
#endif