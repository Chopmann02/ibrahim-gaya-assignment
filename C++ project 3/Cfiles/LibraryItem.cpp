#include "Hfiles/LibraryItem.h"

LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false), dueDate("") {}

std::string LibraryItem::getTitle() const {
    return title;
}

void LibraryItem::setTitle(const std::string& title) {
    this->title = title;
}

bool LibraryItem::getIsCheckedOut() const {
    return isCheckedOut;
}

std::string LibraryItem::getDueDate() const {
    return dueDate;
}

void LibraryItem::checkOut(const std::string& dueDate) {
    this->isCheckedOut = true;
    this->dueDate = dueDate;
}

void LibraryItem::returnItem() {
    this->isCheckedOut = false;
    this->dueDate = "";
}