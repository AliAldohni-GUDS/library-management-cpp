#include <iostream>
#include "Library.h"
#include "RegularMember.h"
#include "PremiumMember.h"

int main() {
    Library library;

    // Books
    library.addBook(Book("Clean Code", "Robert C. Martin", "9780132350884"));
    library.addBook(Book("Design Patterns", "GoF", "9780201633610"));

    // Members (polymorphism)
    RegularMember regular("Ali", "R001");
    PremiumMember premium("Ali", "P001");

    library.registerMember(&regular);
    library.registerMember(&premium);

    // Borrowing
    library.borrowBook(&regular, "9780132350884");
    library.borrowBook(&regular, "9780201633610");
    library.borrowBook(&regular, "9780000000000"); // should fail at limit

    library.borrowBook(&premium, "9780132350884");
    library.borrowBook(&premium, "9780201633610");

    library.printStatus();

    return 0;
}
