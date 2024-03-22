# Subject breakdown 📄
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

# Linked lists 📝
* All you need to know about linked lists: https://youtu.be/mkZYMKwKkvI

# Algorithm 💻
* Turk algorithm: https://medium.com/@ayogun/push-swap-c1f5d2d41e97

# Checker42
#### Use the checker program from 42-push_swap-project
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

# Visualizer
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
