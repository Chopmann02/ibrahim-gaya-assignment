#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <unordered_map>
#include "BookItem.h"
#include "PatronRecord.h"

class Library {
private:
    std::vector<BookItem> books;
    std::unordered_map<int, PatronRecord> patronRecords;

public:
    void addBook(const BookItem& book);
    void addPatron(int libraryCardNumber, const PatronRecord& record);
    bool borrowBook(int libraryCardNumber, const std::string& isbn);
    bool returnBook(int libraryCardNumber, const std::string& isbn);
};
#endif