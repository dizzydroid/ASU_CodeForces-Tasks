# <p align="center">B. Student_Class </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

<pre align = "center"> <b> <a href="https://github.com/dizzydroid/ASU_CodeForces-Tasks/blob/main/Lab%203/Solutions/B%20-%20Student%20Class.cpp">View Solution</a> </b> </pre>

Write a C++ program that receives from a user a list of students, which includes the student code, name, and grades in all of the available five courses in the current semester.

Then, the program outputs a sorted list of all students' names, along with their GPAs.

The program should use the implemented "Course" class in "Problem A", and it should implement a "Student" Class, which has the following attributes:

   - "scode" and "sname" strings to store student "code" and "name" respectively.

   - "courses" array, which stores the five courses of the current semester.

   - "gpa" float variable to hold student GBA.

Class Constructor can be

   Student(string code, string name);

   which initializes course attributes with the received data. It also initializes the student "GPA" by zero.

the constructor also initializes the array of courses, by the following data:

   courses[0] = {"CS101", "Introduction to Computer Science", 3};

   courses[1] = {"MATH201", "Calculus I", 4};

   courses[2] = {"PHYS101", "Introduction to Physics", 4};

   courses[3] = {"CHEM101", "Introduction to Chemistry", 3};

   courses[4] = {"ENGL101", "English Composition I", 3};

All class data should be accessed only using the class member functions, which may include:

   - void register_course(string ccode, float cgrade)

   - float calc_gpa()

In the main of the program:

   - take number of students from user, then create an object for each student and register his grades.

   - sort students according to their GPAs.

   - output the sorted list showing students' names and GPAs

## Input
 - In the first line, an integer representing number of students.

    - Then, a list includes all data of each student, like in the following example

    E.g.,

        1

        S1 Ahmed

        CS101 4

        MATH201 3

        PHYS101 3

        CHEM101 3

        ENGL101 3
## Output
     - a list of all students, which shows name and GPA for each student.

    The list displays each student in a separate line, followed by an empty line.

    E.g.,

        Ahmed 3.17647



### Examples<br>
 ```input```<br>

1 <br>
S1 Ahmed <br>
CS101 4 <br>
MATH201 3.7 <br>
PHYS101 2.3 <br>
CHEM101 2.7 <br>
ENGL101 3 <br>

 ```output```<br>

**Ahmed 3.12353** <br>

 ```input```<br>

2 <br>
S1 Ahmed <br>
CS101 4 <br>
MATH201 3.7 <br>
PHYS101 2.3 <br>
CHEM101 2.7 <br>
ENGL101 3 <br>
S2 Sarah <br>
CS101 3 <br>
MATH201 2.7 <br>
PHYS101 2 <br>
CHEM101 3.3 <br>
ENGL101 3.7 <br>

 ```output```<br>

**Ahmed 3.12353** <br><br>

**Sarah 2.87059** <br>

 ```input```<br>

3 <br>
S1 Sarah <br>
CS101 3 <br>
MATH201 2.7 <br>
PHYS101 2 <br>
CHEM101 3.3 <br>
ENGL101 3.7 <br>
S2 Ahmed <br>
CS101 4 <br>
MATH201 3.7 <br>
PHYS101 2.3 <br>
CHEM101 2.7 <br>
ENGL101 3 <br>
S3 Ibrahim <br>
CS101 3.7 <br>
MATH201 2 <br>
PHYS101 2.3 <br>
CHEM101 2.7 <br>
ENGL101 3.3 <br>

 ```output```<br>

**Ahmed 3.12353** <br><br>

**Sarah 2.87059** <br><br>

**Ibrahim 2.72353** <br>

#### Note
- GPA= $$\frac{\sum \text{{coursegrade}} \cdot \text{{coursehours}}}{\sum \text{{coursehours}}}$$

- you can use arrays or vectors.
