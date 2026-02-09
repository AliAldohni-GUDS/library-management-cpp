#include <iostream>
#include "Book.h"

int main() {
    Book book("Clean Code", "Robert C. Martin", "9780132350884");

    std::cout << "Title: " << book.getTitle() << std::endl;
    std::cout << "Author: " << book.getAuthor() << std::endl;
    std::cout << "ISBN: " << book.getIsbn() << std::endl;

    return 0;
}