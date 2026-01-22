#include "RecordManager.h"

namespace records {
    void RecordManager::addStudent(int id, const std::string& name, int year) {
        students_.push_back(std::make_unique<Student>(id, name, year));
    }

    void RecordManager::printAll() const {
        for (const auto& s : students_) {
            std::cout << *s << "\n";
        }
    }
}