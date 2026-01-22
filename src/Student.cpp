#include "Student.h"

namespace records {

    Student::Student(int id, std::string name, int year)
    : id_(id), name_(std::move(name)), year_(year){
        std::cout << "[Student] Created: " << name_ << "\n";
    }

    Student::~Student() {
        std::cout << "[Student] Destroyed: " << name_ << "\n";
    }

    int Student::getID() const {return id_;}
    const std::string& Student::getName() const {return name_;}
    int Student::getYear() const {return year_;}

    std::ostream& operator<<(std::ostream& os, const Student& s) {
        return os << "Student{id=" <<s.id_
                  << ", name=" << s.name_ 
                  << ", year=" << s.year_ << "}";
    }
}