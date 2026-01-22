#include <iostream>
#include "RecordManager.h"
#include "Utils.h"

using namespace records;

int main() {
    RecordManager manager;

    // Ask the user how many students they want to add
    int count = readInt("How many students do you want to add? ");


    //For loop will loop according to the number of students we added
    for (int i = 0; i < count; ++i) {
        std::cout << "\n--- Student " << (i + 1) << " ---\n";

        int id = readInt("Enter student ID: ");
        std::string name = readLine("Enter student name: ");
        int year = readInt("Enter student year: ");

        manager.addStudent(id, name, year);
    }

    std::cout << "\nAll students:\n";
    manager.printAll();

    std::cout << "Exiting program...\n";
}
