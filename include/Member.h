#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>

class Member {
private:
    std::string name;
    std::string memberId;
    int borrowLimit;
    std::vector<std::string> borrowedIsbns;

public:
    // Constructor
    Member(const std::string& name, const std::string& memberId, int borrowLimit = 3);

    // Getters
    std::string getName() const;
    std::string getMemberId() const;
    int getBorrowLimit() const;
    int borrowedCount() const;

    // Borrow logic
    bool canBorrowMore() const;
    void addBorrowedIsbn(const std::string& isbn);
    bool removeBorrowedIsbn(const std::string& isbn);
};

#endif
