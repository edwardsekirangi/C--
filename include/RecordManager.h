#pragma once
#include <vector>
#include <memory>
#include "Student.h"

namespace records {

    //Declarations for functions used in Record.cpp and other files as well, to add student to our memory
class RecordManager {
public:
    void addStudent(int id, const std::string& name, int year);
    void printAll() const;

    //Returned student that is managed by the memory library is stored in the vector students_
private:
    std::vector<std::unique_ptr<Student>> students_;
};

}
