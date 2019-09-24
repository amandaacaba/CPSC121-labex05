#include <iostream>
#include <iomanip>
#include <fstream>

int main() {

std::cout << std::setprecision(2) << std::fixed;

std::string fileName;
std::string name;
std::string number;
int contactNumber = 1;
bool userDone = false;

std::ofstream out_file;

std::cout << "Please provide the file name for your phone book: ";
std::cin >> fileName;
std::cin.ignore();
out_file.open(fileName);

do {

  std::cout << "Contact " << contactNumber << ": \n";
  std::cout << "Please provide their name: ";
  std::getline(std::cin, name);

  if (name != "Done") {
    out_file << name << "\n";
    std::cout << "Please provide their number: ";
    std::getline(std::cin, number);
    contactNumber++;
    out_file << number << "\n";
  }
  else {
    userDone = true;
  }


} while (userDone == false);

std::cout << "Savng phonebook into " << fileName << "\n";
out_file.close();
std::cout << "Done!";

return 0;

}
