# Library Management System (C++)

Mini project for Coding Camp.

## Build & Run

## Overview
This project is a **console-based Library Management System** developed in **C++** as part of a coding camp assignment.  
It demonstrates strong use of **Object-Oriented Programming (OOP)** principles, clean folder structure, and Git-based version control.

The system supports:
- Managing books
- Managing library members
- Different member types with different borrowing rules
- Borrowing logic with limits
- Polymorphism through base-class pointers

---

## Project Structure
library-management-cpp/
├── include/
│ ├── Book.h
│ ├── Member.h
│ ├── RegularMember.h
│ ├── PremiumMember.h
│ └── Library.h
├── src/
│ ├── Book.cpp
│ ├── Member.cpp
│ ├── Library.cpp
│ └── main.cpp
├── build/
│ └── library_app.exe
├── README.md
└── .gitignore


---

## Object-Oriented Programming Concepts

<Encapsulation>
All class attributes are declared as **private** and accessed only through **public methods**, ensuring controlled access to internal state.

Example:
```cpp
private:
    std::string title;
    std::string isbn;
Different member types inherit from a common base class Member.

RegularMember → borrow limit: 3 books
PremiumMember → borrow limit: 5 books

class RegularMember : public Member { };
class PremiumMember : public Member { };

<Polymorphism>
Members are handled using base class pointers (Member*), allowing the library to treat all members uniformly while still respecting their specific borrowing limits.
std::vector<Member*> members;
The actual borrowing behavior depends on the concrete object type at runtime.

<Abstraction>
The Member class defines common member behavior (name, ID, borrowing logic), while derived classes customize behavior through constructor configuration.
Member(name, memberId, borrowLimit);

Aggregation
The Library class aggregates books and members without owning their lifetime permanently.
std::vector<Book> books;
std::vector<Member*> members;
This models a real-world relationship where members and books exist independently of the library system.

Example Console Output
Regular member limit: 3
Premium member limit: 5
Regular borrowed count: 3
Premium borrowed count: 4

Build and Run Instructions:
Compile
g++ -std=c++17 -I include src/main.cpp src/Book.cpp src/Member.cpp src/Library.cpp -o build/library_app.exe

Run
.\build\library_app.exe

Version Control:
Git initialized locally
Incremental commits for each development step
Repository pushed to GitHub with clean commit history

Author
Ali Aldohni / s-001075
Coding Camp – C++ Object-Oriented Programming Assignment
