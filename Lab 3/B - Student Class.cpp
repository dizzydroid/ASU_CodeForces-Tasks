#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

class Course {
public:
    std::string ccode;
    std::string cname;
    int ccredit;
    float cgrade;

    Course(std::string code, std::string name, int credit)
        : ccode(code), cname(name), ccredit(credit), cgrade(0.0) {}
};

class Student {
public:
    std::string scode;
    std::string sname;
    float gpa;
    Course courses[5] = {
        Course("CS101", "Introduction to Computer Science", 3),
        Course("MATH201", "Calculus I", 4),
        Course("PHYS101", "Introduction to Physics", 4),
        Course("CHEM101", "Introduction to Chemistry", 3),
        Course("ENGL101", "English Composition I", 3)
    };

    Student(std::string code, std::string name)
        : scode(code), sname(name), gpa(0.0) {}

    void register_course(std::string ccode, float cgrade) {
        for (int i = 0; i < 5; i++) {
            if (courses[i].ccode == ccode) {
                courses[i].cgrade = cgrade;
                break;
            }
        }
    }

    float calc_gpa() {
        int total_credits = 0;
        float total_points = 0.0;
        for (int i = 0; i < 5; i++) {
            total_credits += courses[i].ccredit;
            total_points += courses[i].ccredit * courses[i].cgrade;
        }
        gpa = total_points / total_credits;
        return gpa;
    }
};

bool compare_students(const Student& a, const Student& b) {
    return a.gpa > b.gpa;
}

int main() {
    int num_students;
    std::cin >> num_students;
    std::vector<Student> students;

    for (int i = 0; i < num_students; i++) {
        std::string code, name;
        std::cin >> code >> name;
        Student student(code, name);

        for (int j = 0; j < 5; j++) {
            std::string ccode;
            float cgrade;
            std::cin >> ccode >> cgrade;
            student.register_course(ccode, cgrade);
        }

        student.calc_gpa();
        students.push_back(student);
    }

    std::sort(students.begin(), students.end(), compare_students);

    for (const auto& student : students) {
        std::cout << std::fixed << std::setprecision(5) << student.sname << " " << student.gpa << "\n\n"; 
    }

    return 0;
}
