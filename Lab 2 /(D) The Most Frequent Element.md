# <p align="center"> D. The Most Frequent Element </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

Write a C++ program to find the most frequent element in a group of integers entered by the user and stored in an array (or a vector).

In case of using arrays, array capacity must be constant (e.g., 50, representing the max number of elements that the user can enter), but user can enter any number of elements <= the max capacity.

The user enters the number of elements, followed by the elements.

You can use function :

*int most_frequent_element(const int array[], int array_size);*

Which takes the number of elements received from user (array_size).

And the array of integers (array).

and returns the the most frequent element in the entered array elements.

Note that: If the number of elements was 1, this only one element can be considered the most frequent element.

## Input
Receive textit{the number of elements}, followed by the elements. E.g. in the following example, the number of elements is 5, and elements are 1 1 1 2 5.

5

1 1 1 2 5

## Output
Show the most frequent element in the entered values.

1

### Examples<br>
 ```input```<br>
5 1 1 1 2 5 <br>
 ```output```<br>
**1** <br>


#### Note
- All the elements in the given array are integers.

- Don't worry there will be a number that is frequent more than others.

- you can use vectors or arrays.





