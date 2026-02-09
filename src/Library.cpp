#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::registerMember(Member* member) {
    members.push_back(member);
}

bool Library::borrowBook(Member* member, const std::string& isbn) {
    if (!member->canBorrowMore()) {
        std::cout << "Borrow limit reached.\n";
        return false;
    }

    member->addBorrowedIsbn(isbn);
    return true;
}

bool Library::returnBook(Member* member, const std::string& isbn) {
    return member->removeBorrowedIsbn(isbn);
}

void Library::printStatus() const {
    for (auto* m : members) {
        std::cout
            << "Member ID: " << m->getMemberId()
            << " | Borrowed: " << m->borrowedCount()
            << "/" << m->getBorrowLimit()
            << std::endl;
    }
}
