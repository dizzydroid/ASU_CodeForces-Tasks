#include <iostream>
#include <vector>

using namespace std;

class Course {
private:
    string ccode;
    string cname;
    float cgrade;
    int chours;
    bool registered;
public:
    Course(string code, string name, int hours) {
        ccode = code;
        cname = name;
        chours = hours;
        cgrade = 0;
        registered = false;
    }

    bool is_registered() {
        return registered;
    }

    bool is_passed() {
        return cgrade >= 2.0;
    }

    string get_name() {
        return cname;
    }

    string get_code() {
        return ccode;
    }

    float get_grade() {
        return cgrade;
    }

    int get_hours() {
        return chours;
    }

    void set_registered(bool reg) {
        registered = reg;
    }

    void set_grade(float grade) {
        cgrade = grade;
    }
};

int main() {
    // Create the courses
    vector<Course> courses = {
        Course("CS101", "Introduction to Computer Science", 3),
        Course("MATH201", "Calculus I", 2),
        Course("PHYS101", "Introduction to Physics", 4),
        Course("CHEM101", "Introduction to Chemistry", 3),
        Course("ENGL101", "English Composition I", 1)
    };

    // Read the number of registered courses
    int num;
    cin >> num;

    float total_grades = 0;
    int total_hours = 0;

    // Read the course code and grade for each registered course
    for (int i = 0; i < num; i++) {
        string code;
        float grade;
        cin >> code >> grade;

        for (Course& course : courses) {
            if (course.get_code() == code) {
                course.set_registered(true);
                course.set_grade(grade);

                total_grades += grade * course.get_hours();
                total_hours += course.get_hours();
                break;
            }
        }
    }

    // Print the result
    for (Course& course : courses) {
        if (course.is_registered() && course.is_passed()) {
            cout << "P " << course.get_code() << " - " << course.get_name() << "\n";
        }
    }

    cout << "\n";

    for (Course& course : courses) {
        if (course.is_registered() && !course.is_passed()) {
            cout << "F " << course.get_code() << " - " << course.get_name() << "\n";
        }
    }

    cout << "\nGPA: " << total_grades / total_hours << "\n";

    return 0;
}
