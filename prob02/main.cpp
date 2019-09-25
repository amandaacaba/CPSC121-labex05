#include <iostream>
#include <iomanip>
#include <fstream>

int main() {

std::cout << std::setprecision(2) << std::fixed;

int contactNumber = 1;

std::string fileName;
std::ifstream in_file;

std::string name;
std::string number;
bool isEmpty = true;

std::cout << "Please provide the file name for your phone book: ";
std::cin >> fileName;
std::cin.ignore();
in_file.open(fileName);

if (in_file) {

  while (std::getline(in_file, name)) {
      isEmpty = false;
      std::cout << "Contact " << contactNumber << ": \n" ;
      std::cout << "Name: " << name << "\n";
      std::getline(in_file, number);
      std::cout << "Number: " << number << "\n";
      contactNumber++;
  }
  if (isEmpty == true) {
    std::cout << "Phone book does not contain any contacts!";
  }

}
else {
  std::cout << "Invalid phonebook file!";
}

return 0;

}
