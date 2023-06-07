# <p align="center">A. Course_Class </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

Write a C++ program that receives from a student a list of courses (up to five courses) that he was enrolled, which includes the code of each course along with his grade in that course.

Then, the program outputs a full list of the student's enrolled courses, which illustrate the status of each course whether it was passed or not. The program also outputs the student's total GPA.

The program should implement a "Course" Class, which has the following attributes:

   - "ccode" and "cname" strings to store course "code" and "name" respectively.

   - "cgrade" float variable to hold course grade.

   - "chours" integer variable to hold course credit hours.

   - "registered" boolean flag to indicate whether the student registered the course or not.

Class Constructor can be

   Course(string code, string name, int hours);

   which initializes course attributes with the received data. It also initializes both course "grade" and the "registered" flag by zeros.

All class data should be accessed only using the class member functions, which may include:

   - bool is_registered ()

   - bool is_passed()

   - string get_name()

   - string get_code()

   - float get_grade()

   - int get_hours()

   - set_registered(bool)

   - set_grade(float)

In the main of the program:

   - create the following 5 courses, which are the only available courses for students to enroll:

     Course("CS101", "Introduction to Computer Science", 3);

     Course("MATH201", "Calculus I", 2);

     Course("PHYS101", "Introduction to Physics", 4);

     Course("CHEM101", "Introduction to Chemistry", 3);

     Course("ENGL101", "English Composition I", 1);

   - receive from user (as showed in examples):

      * Number of registered courses (<=5)

      * Followed by courses' codes (which should be from the above created courses), each with its grade.

   - Then, you can use the following functions to make the required inputs:

     void print_passed_courses();

     void Print_failed_courses();

     float calc_gpa();

## Input
 - In the first line, an integer representing number of courses.

    - Then, a list includes the course code and grade of all registered courses, each in a separate line.

    E.g.,

        3

        CS101 3.7

        MATH201 3

        ENGL101 1

## Output
    - a list of all enrolled courses, which shows for each course:

        course status ("P" or "F"), course code, and course name (in the format of the following example).

      The list displays each course in a separate line, and it first displays all passed courses followed by an empty line

      Then, it also displays all failed courses followed by an empty line.

    - the total GPA of the registered courses.

    E.g.,

        P CS101 - Introduction to Computer Science

        P MATH201 - Calculus I

         

        F ENGL101 - English Composition I

         

        GPA: 3.01667



### Examples<br>

 ```input```<br>
3 <br>
CS101 3.7 <br>
MATH201 3 <br>
ENGL101 1 <br>

 ```output```<br>
**P CS101 - Introduction to Computer Science** <br>
**P MATH201 - Calculus I** <br> <br>

**F ENGL101 - English Composition I** <br> <br>

**GPA: 3.01667 <br>**

 ```input```<br>
2 <br>
CS101 4 <br>
PHYS101 3 <br>

 ```output```<br>
**P CS101 - Introduction to Computer Science** <br>
**P PHYS101 - Introduction to Physics** <br> <br>


**GPA: 3.42857**

 ```input```<br>
1 <br>
CHEM101 2.7 <br>

 ```output```<br>
**P CHEM101 - Introduction to Chemistry** <br><br>


**GPA: 2.7**

#### Note
- GPA= $$\frac{\sum \text{{coursegrade}} \cdot \text{{coursehours}}}{\sum \text{{coursehours}}}$$

- A course is considered "passed", if its grade is at least 2

- you can use arrays or vectors.

- You don't need to read each input line in one string, then cut it. Instead, you can simply read each value separately.



