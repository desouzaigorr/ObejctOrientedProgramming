#include <iostream>
#include <string>
using namespace std;

  class Book {       // The class
  public:             // Access specifier
    int year;        // Attribute (int variable)
    string title;
    string author;  // Attribute (string variable)
};

int main() {
  Book hart;  // Create an object of Book

  // Access attributes and set values
  hart.year = 1970; 
  hart.title = "Eletrônica de Potência";
  hart.author = "Hart";


  // Print attribute values
  cout << hart.year << "\n";
  cout << hart.title << "\n";
  cout << hart.author << "\n";

  return 0;
}