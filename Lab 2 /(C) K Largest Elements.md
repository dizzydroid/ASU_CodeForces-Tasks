# <p align="center"> C. K Largest Elements </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

Write a C++ program to find the k largest elements of a group of integers entered by the user and stored in an array (or a vector).

In case of using arrays, array capacity must be constant (e.g., 50, representing the max number of elements that the user can enter), but user can enter any number of elements <= the max capacity.

The user enters the number of elements, followed by the required k (representing the required number of largest elements to be displayed), then the elements.

You can use function :

*void k_largest_elements(int arr[], int array_size, int k);*

Which takes the number of elements received from user (array_size),

the required k (k)

And then, the array of integers (arr).

It should displays the most k largest elements of all entered elements.

Note that:

In case that the required K is greater than the total number of elements, the remaining values will be zeros.

(E.g., if the input was 3 5 1 4 2, output should be 4 2 1 0 0)

## Input
Receive the number of elements, followed by the required k , and then, the elements. E.g., in the following example, number of elements is 5, it is required to find and display the largest 3 elements, and the elements are 1 2 3 4 5.

5

3

1 2 3 4 5

## Output
Display the most largest k elements

5 4 3

### Examples<br>

 ```input```<br>
5 3 1 2 3 4 5 <br>

 ```output```<br>
**5 4 3** <br>

 ```input```<br>
5 2 1 2 3 4 5 <br>

 ```output```<br>
**5 4** <br>

 ```input```<br>
6 3 1 2 3 4 5 6 <br>

 ```output```<br>
**6 5 4** <br>

 ```input```<br>
1 2 1 <br>

 ```output```<br>
**1 0** <br>

 ```input```<br>
3 4 1 2 3 <br>

 ```output```<br>
**3 2 1 0** <br>

#### Note
All the elements in the given array are integers.

you can use vectors or arrays.



