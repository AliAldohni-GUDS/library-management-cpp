#include <iostream>
#include "Book.h"
#include "RegularMember.h"
#include "PremiumMember.h"

int main() {
    Book book1("Clean Code", "Robert C. Martin", "9780132350884");
    Book book2("The Pragmatic Programmer", "Andrew Hunt", "9780201616224");
    Book book3("Design Patterns", "GoF", "9780201633610");
    Book book4("Refactoring", "Martin Fowler", "9780201485677");

    RegularMember regular("Ali", "R001");
    PremiumMember premium("Ali", "P001");

    std::cout << "Regular member limit: " << regular.getBorrowLimit() << std::endl;
    std::cout << "Premium member limit: " << premium.getBorrowLimit() << std::endl;

    // Regular tries to borrow 4 books (should allow only 3)
    if (regular.canBorrowMore()) regular.addBorrowedIsbn(book1.getIsbn());
    if (regular.canBorrowMore()) regular.addBorrowedIsbn(book2.getIsbn());
    if (regular.canBorrowMore()) regular.addBorrowedIsbn(book3.getIsbn());
    if (regular.canBorrowMore()) regular.addBorrowedIsbn(book4.getIsbn()); // should NOT happen

    std::cout << "Regular borrowed count: " << regular.borrowedCount() << std::endl;

    // Premium borrows 4 books (should allow)
    if (premium.canBorrowMore()) premium.addBorrowedIsbn(book1.getIsbn());
    if (premium.canBorrowMore()) premium.addBorrowedIsbn(book2.getIsbn());
    if (premium.canBorrowMore()) premium.addBorrowedIsbn(book3.getIsbn());
    if (premium.canBorrowMore()) premium.addBorrowedIsbn(book4.getIsbn());

    std::cout << "Premium borrowed count: " << premium.borrowedCount() << std::endl;

    return 0;
}
