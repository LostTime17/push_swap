# Subject simple breakdown 📄
* You have 2 stacks named 'a' and 'b'.
* Your program will receives input values [random amount of numbers (negative and/or positive) which cannot be duplicated].
* Input example:
```./push_swap "5 -1 2 3 4"```
```./push_swap 5 -1 2 3 4```
* Choose sorting algorithm that fit with the scale numbers of this project benchmark
* Program will output the instructions step to sort the list of integers from input seperated by '\n'
* Output example:
```
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./
```
* See more instructions in subject.pdf

# Implementation ✏️
* Declare pointer to 2 Doubly linked list ```a``` and ```b``` then initialized both of it to NULL;
* Input argument errors handler:
```
// if there's no argument pass in
// or there's 1 argument and it's empty
// return (1);
```
* If input argument = 1, it's a string handle it with split_str() function and put it to argv[ ]
* Initlize every argv[ ] into stack a
```
// check every argv[i] that it's in correct format of integers input
// use ft_atol() to init the 'n' variable
// check if 'n' is in the possible value of integer
// check if 'n' is duplicate from the other node in stack a
// create new node, assign 'n' value to it and append to the stack a
    // if first node don't existed; then this node is the first node
    // if there's already some node in stack a then find last node and append to it
```
* Check that if the stack a is already sorted
```
// if stack_len == 2; then swap top 2 node in stack a;
// else if stack_len == 3; then called sort_three() function;
// else stack_len > 3; then called sort_stack() function; (Turk algorithm)
```
* Don't forget to free everything at the end!!

# Linked lists 📝
#### Doubly linked list data structure prototype
```
typedef struct s_struct
{
    int                data;    // Data store in node, of type int
    struct s_struct   *next;    // Pointer to the next node in the list
    struct s_struct   *prev;    // Pointer to the previous node in the list
}              t_struct         // Struct name that will be use to declare this struct in program

==========================================================================

     Node 1        Node 2         Node 3
+------------+ +------------+ +------------+
| data: 5    | | data: 10   | | data: 15   |
| next: ———> | | next: ———> | | next: NULL |
| prev: NULL | | <——— :prev | | <——— :prev |
+------------+ +------------+ +------------+

```
* All you need to know about linked lists: https://youtu.be/mkZYMKwKkvI

# Algorithm 💻
* If stack_len(*a) > 3; Push top 2 nodes to stack b
* Push the cheapest push_cost node from stack a to stack b until stack a have 3 nodes left
    1. Find the best node from stack a to prepare for push to stack b
* Sort 3 nodes lefted in stack a with functions sort_three()
* Push the all sorted nodes from stack b back to stack a
    1. Find the best node from stack a to prepare for push a top node from stack b to stack a
* Update index and median flags of each nodes in stack a
* Rotate stack a until the smallest node is on the top
* Turk algorithm: https://medium.com/@ayogun/push-swap-c1f5d2d41e97

# Checker42 🪪
#### Use the checker program from 42-push_swap-project's page
* Download and put it in the same directory of push_swap program
* Do ```chmod +x``` on the checker program to give it an execute permission
* See how many step of instructions output by your program:
```
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6
```
* See that your output instructions is correctly:
```
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
```

#### Error check
* positive input: ```./push_swap 5 1 3 2 4```  ```./push_swap "5 1 3 2 4"```
* negative input ```./push_swap -5 -1 -3 -2 -4```  ```./push_swap "-5 -1 -3 -2 -4"```
* mixed pos/neg input: ```./push_swap -5 1 -3 2 -4```  ```./push_swap "-5 1 -3 2 -4"```
* not a digit input: ```./push_swap 5 1 3 ab -4```  ```./push_swap "-5 1 ab 2 4"```
  1. output must be "Error" followed by newline.
  2. Error must display on ```stderr``` with ```\n```
* Run ```valgrind``` to see if there's any memleak
* Random Number Generator for manual check: https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php

# Visualizer 📊
#### See how your program algorithm working step-by-step
* o-reo: https://github.com/o-reo/push_swap_visualizer
```
sudo apt-get update
sudo apt-get install cmake
sudo apt-get install g++
sudo apt-get install clang
sudo apt-get install libgl1-mesa-dev libglu1-mesa-dev
sudo apt-get install libx11-dev libxrandr-dev
sudo apt-get install libudev-dev
sudo apt-get install libfreetype-dev

cd push_swap_visualizer
mkdir build
cd build

cmake ..
make

./bin/visualizer
```

# Tester 🧮
* gemartin99: https://github.com/gemartin99/Push-Swap-Tester
```
cd Push-Swap-Tester
mv push_swap_test_linux.sh ..
cd ..
bash push_swap_test_linux.sh
```
* LeoFu9487: https://github.com/LeoFu9487/push_swap_tester
```
cd push_swap_tester
bash basic_test.sh
```
# Super Thanks to this 📌
* Ocean's 42: https://suspectedoceano.notion.site/Ocean-s-42-fd42e3ed0f6049ca98fb3b290b84d4d0
* Spiral rule to decipher C declaration: https://riptutorial.com/c/example/18833/using-the-right-left-or-spiral-rule-to-decipher-c-declaration
