#include <string>
#include <iostream>
#include "dir.h"

int main() {
  std::cout << "Making directory\n";
  if (Dir::make("testing_directory", 0775) == 0) {
    std::cout << "Successfully created testing_directory\n";
  } else {
    std::cout << "Error occurred while making directory :(\n";
  }
  return 0;
};
