#pragma once
#include <string>
#include <iostream>

namespace records {
    class Student{
        public:
             Student(int id, std::string name, int year);
             ~Student();

            int getID() const;
            const std::string& getName() const;
            int getYear() const;

            friend std::ostream& operator <<(std::ostream& os, const Student& s);

        private:
        int id_;
        std::string name_;
        int year_;
    };
}