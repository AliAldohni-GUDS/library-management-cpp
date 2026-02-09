#include <iostream>
#include "Book.h"
#include "Member.h"

int main() {
    Book book("Clean Code", "Robert C. Martin", "9780132350884");

    Member member("Ali", "M001");

    std::cout << "Book Info:\n";
    std::cout << "Title: " << book.getTitle() << std::endl;
    std::cout << "Author: " << book.getAuthor() << std::endl;
    std::cout << "ISBN: " << book.getIsbn() << std::endl;

    std::cout << "\nMember Info:\n";
    std::cout << "Name: " << member.getName() << std::endl;
    std::cout << "ID: " << member.getMemberId() << std::endl;
    std::cout << "Can borrow more? "
              << (member.canBorrowMore() ? "Yes" : "No") << std::endl;

    member.addBorrowedIsbn(book.getIsbn());

    std::cout << "Borrowed count after borrowing: "
              << member.borrowedCount() << std::endl;

    return 0;
}
