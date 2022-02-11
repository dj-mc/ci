#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string name = "";

  std::cout << "Yo." << std::endl;
  std::cout << "Enter your name: " << std::endl;
  std::cin >> name;
  std::cout << "Your name is " << name << std::endl;

  std::vector<std::string> msg{"Yo,",  "C++",     "World",
                               "from", "VS Code", "and the C++ extension!"};

  for (const std::string &word : msg) {
    std::cout << word << " ";
  }

  std::cout << std::endl;

  return 0;
}
