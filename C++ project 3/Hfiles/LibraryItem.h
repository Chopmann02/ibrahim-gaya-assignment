#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    LibraryItem(const std::string& title);
    std::string getTitle() const;
    void setTitle(const std::string& title);
    bool getIsCheckedOut() const;
    std::string getDueDate() const;
    void checkOut(const std::string& dueDate);
    void returnItem();
};
#endif