#include <iostream>
#include <vector>
#include "Book.h"
#include "Library.h"

int main() {

    std::vector<Books> book;
    Library library1 = {book};

    //Insert books
    library1.InsertBook({"Economics", "Alan" , 1992});
    library1.InsertBook({"Linear Algebra", "Lisa", 1993});
    library1.InsertBook({"Programming", "James", 1991});
    library1.InsertBook({"Design", "Max", 1992});
    library1.InsertBook({"Design", "John", 1993});
    library1.InsertBook({"Law", "Lisa", 1995});
    library1.InsertBook({"History", "Maxim", 1990});

    //check functions
    std::cout << "\nFunction SearchByAuthor: " << std::endl;
    std::vector<Books> search_by_author;
    search_by_author = library1.SearchByAuthor("Lisa");
    for (auto i : search_by_author)
        std::cout << i.getTitle() << " " << i.getAuthor() << " " << i.getYear() << std::endl;


    std::cout << "\nFunction SearchByYear: " << std::endl;
    std::vector<Books> search_by_year;
    search_by_year = library1.SearchByYear(1992);
    for (auto i : search_by_year)
        std::cout << i.getTitle() << " " << i.getAuthor() << " " << i.getYear() << std::endl;


    std::cout << "\nFunction SearchByTitle: " << std::endl;
    std::vector<Books> search_by_title;
    search_by_title = library1.SearchByTitle("Design");
    for (auto i : search_by_title)
        std::cout << i.getTitle() << " " << i.getAuthor() << " " << i.getYear() << std::endl;

    return 0;

}