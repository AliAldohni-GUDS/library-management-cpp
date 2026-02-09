#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <memory>
#include "Book.h"
#include "Member.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member*> members; // polymorphism

public:
    void addBook(const Book& book);
    void registerMember(Member* member);

    bool borrowBook(Member* member, const std::string& isbn);
    bool returnBook(Member* member, const std::string& isbn);

    void printStatus() const;
};

#endif
