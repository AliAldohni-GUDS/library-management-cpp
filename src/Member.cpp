#include "Member.h"
#include <algorithm>

// Constructor
Member::Member(const std::string& name, const std::string& memberId, int borrowLimit)
    : name(name), memberId(memberId), borrowLimit(borrowLimit) {}

// Getters
std::string Member::getName() const {
    return name;
}

std::string Member::getMemberId() const {
    return memberId;
}

int Member::getBorrowLimit() const {
    return borrowLimit;
}

int Member::borrowedCount() const {
    return static_cast<int>(borrowedIsbns.size());
}

// Borrow logic
bool Member::canBorrowMore() const {
    return borrowedCount() < borrowLimit;
}

void Member::addBorrowedIsbn(const std::string& isbn) {
    borrowedIsbns.push_back(isbn);
}

bool Member::removeBorrowedIsbn(const std::string& isbn) {
    auto it = std::find(borrowedIsbns.begin(), borrowedIsbns.end(), isbn);
    if (it == borrowedIsbns.end()) return false;

    borrowedIsbns.erase(it);
    return true;
}
