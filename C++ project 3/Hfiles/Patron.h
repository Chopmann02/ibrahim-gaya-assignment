#ifndef PATRON_H
#define PATRON_H
#include <string>

class Patron {
private:
    std::string name;
    int libraryCardNumber;

public:
    Patron(const std::string& name, int libraryCardNumber);
    std::string getName() const;
    void setName(const std::string& name);
    int getLibraryCardNumber() const;
    void setLibraryCardNumber(int libraryCardNumber);
};
#endif