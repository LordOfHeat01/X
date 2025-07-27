#include <iostream>
#include <string>

int main() {
    std::string paragraph;
    std::string line;

    std::cout << "Enter a paragraph (press Enter twice to finish):\n";

    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break; // Exit the loop if an empty line is encountered
        }
        paragraph += line;
        paragraph += "\n"; // Add the newline character back (getline removes it)
    }

    std::cout << "\nYou entered the following paragraph:\n" << paragraph << std::endl;

    return 0;
}