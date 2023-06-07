# <p align="center"> A. Even - Odd Seperator </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

Write a C++ program to separate even and odd values of a group of integers entered by the user and stored in an array (or a vector).

In case of using arrays, array capacity must be constant (e.g., 50, representing the max number of elements that the user can enter), but user can enter any number of elements <= the max capacity.

The user enters the number of elements, followed by the elements.

The program should display 2 arrays of integers each array in different line: one for even values, And another one for odd values .

## Input
Receive the array size (number of elements), followed by the elements. (E.g., in the following example, number of elements is 5, and elements are 1 2 3 4 5)

5 1 2 3 4 5

## Output
Display 2 arrays, each in a different line, as follows:

2 4 ( even array)

1 3 5 ( odd array)

### Examples<br>

 ```input```<br>
5 1 2 3 4 5 <br>

 ```output```<br>
**2 4** <br> **1 3 5** <br>

 ```input```<br>
7 1 2 3 4 5 6 7<br>

 ```output```<br>
**2 4 6** <br> **1 3 5 7** <br>

 ```input```<br>
3 1 1 1 <br>

 ```output```<br>
**1 1 1** <br>

 ```input```<br>
1 1 2 3 4 <br>

 ```output```<br>
**1** <br>

#### Note
All the elements in the given array are integers.

you can use vectors or arrays.

