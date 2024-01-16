#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include <string>
#include "LibraryItem.h"

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;

public:
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);

    std::string getAuthor() const;
    void setAuthor(const std::string& author);

    std::string getISBN() const;
    void setISBN(const std::string& isbn);
};
#endif