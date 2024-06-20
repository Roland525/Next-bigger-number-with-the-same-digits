# Next-bigger-number-with-the-same-digits

# Task

Write a function in C that takes a number and returns the next bigger number formed by the same digits. If no such number exists, the function should return -1.

# Example

next_bigger_number(12) => 21

next_bigger_number(513) => 531

next_bigger_number(2017) => 2071


next_bigger_number(9) => -1

next_bigger_number(111) => -1

next_bigger_number(531) => -1


# Alghoritm

1. Find the first pair of adjacent digits where the left digit is less than the right digit (starting from the end of the number).
2. If no such pair is found, return -1.
3. Find the smallest digit to the right of the found pair that is larger than the left digit of the pair.
4. Swap these two digits.
5. Sort all digits to the right of the swap position in ascending order.
6. Return the resulting number.

# How to compile?

gcc main.c -o main

./main
