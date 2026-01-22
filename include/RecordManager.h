#pragma once
#include <vector>
#include <memory>
#include "Student.h"

namespace records {

class RecordManager {
public:
    void addStudent(int id, const std::string& name, int year);
    void printAll() const;

private:
    std::vector<std::unique_ptr<Student>> students_;
};

}
