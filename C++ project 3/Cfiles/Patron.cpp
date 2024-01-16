#include "Hfiles/Patron.h"

Patron::Patron(const std::string& name, int libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

std::string Patron::getName() const {
    return name;
}

void Patron::setName(const std::string& name) {
    this->name = name;
}

int Patron::getLibraryCardNumber() const {
    return libraryCardNumber;
}

void Patron::setLibraryCardNumber(int libraryCardNumber) {
    this->libraryCardNumber = libraryCardNumber;
}